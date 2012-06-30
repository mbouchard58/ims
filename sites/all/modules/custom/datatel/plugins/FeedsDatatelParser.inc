<?php

/**
 * @file
 * Feeds Datatel parser
 */

/**
 * Class definition for Datatel Parser.
 *
 * Parses Datatel feed.
 */
class FeedsDatatelParser extends FeedsParser {

  /**
   * Implements FeedsParser::parse().
   */
  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {
    $regCount = 0;

    //get vocabulary ID for "Internship Courses" vocabulary
    // we only want students who are taking courses that have internships
    $vid = taxonomy_vocabulary_machine_name_load("internship_courses")->vid;

    //get all the terms in the vocabulary. there should only be a few
    $terms = taxonomy_get_tree($vid);

    //dprint_r($terms);

    //dvr($terms, $return = FALSE, $name = NULL);
    // create a list of all the course names from the taxonomy tree
    $termNames = array();
    foreach ($terms as $term) {
      $termNames[] = $term->name;
    }

    $xml = new SimpleXMLElement($fetcher_result->getRaw());
    $result = new FeedsParserResult();

    $sections = $xml->xpath('course_sections/course_section');
    //kpr($sections, $return = FALSE, $name = NULL);

    foreach ($sections as $section) {
      $courseName = (string) $section->section_info['course_name'];
      if (in_array($courseName, $termNames)) {
        $guid = (string) $section->section_info['sec_name'] . "-";
        $guid .= $section->term['term_id']; 
        $secNo = (string) $section->section_info['section_no'];
	
        $regItems = $section->xpath('registration/reg_item');
        foreach ($regItems as $regItem) {
          $student['guid'] = $guid . "-" . $regItem->demographics['simmons_login'];
          $student['id'] = (string) $regItem->demographics['simmons_login'];
          $student['title'] = (string) $regItem->demographics['first_name'];
          $student['title'] .= " ". (string) $regItem->demographics['last_name'];
          $student['fname'] = (string) $regItem->demographics['first_name'];
          $student['lname'] = (string) $regItem->demographics['last_name'];
          $student['email'] = (string) $regItem->demographics['simmons_email'];
          $student['course_name'] = $courseName;
          $student['section_no'] = $secNo;
          $result->items[] = $student;
          unset($student);

// $regCount exists to keep the dataset small for testing.  Remove for more advanced testing
	  $regCount++;
	  if ($regCount > 2) break;

        } // close:foreach($regItems as $regItem)
        $regCount = 0;

      } // close:if (in_array...)

    } // close:foreach ($sections as $section) 
/******
* add logic to delete or encrypt ls_moodle.xml
* alternatively, the admin could just delete the feed importer when finished.
*******/
    return $result;
  } // close: function parse()

  /**
   * Implements FeedsParser::getMappingSources().
   */
  public function getMappingSources() {
    return array(
      'guid' => array(
        'name' => t('GUID'),
        'description' => t('Global Unique Identifier of the feed item.'),
      ),
      'id' => array(
        'name' => t('ID'),
        'description' => t('Identifier of the student.'),
      ),
      'title' => array(
        'name' => t('Title'),
        'description' => t('Title of the student entity.'),
      ),
      'fname' => array(
        'name' => t('First Name'),
        'description' => t('First Name of the student.'),
      ),
      'lname' => array(
        'name' => t('Last Name'),
        'description' => t('Last Name of the student.'),
      ),
      'email' => array(
        'name' => t('Email'),
        'description' => t('Email of the student.'),
      ),
      'course_name' => array(
        'name' => t('Course Name'),
        'description' => t('The course in which the student is enrolled.'),
      ),
      'section_no' => array(
        'name' => t('Section Number'),
        'description' => t('The section number for the course in which the student is enrolled.'),
      ),
    )+ parent::getMappingSources();
  }

}
