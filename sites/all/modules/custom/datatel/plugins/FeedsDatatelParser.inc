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
    //get vocabulary ID for "Internship Courses" vocabulary
    // we only want students who are taking courses that have internships
    $vid = taxonomy_vocabulary_machine_name_load("internship_courses")->vid;

    //get all the terms in the vocabulary. there should only be a few
    $terms = taxonomy_get_tree($vid);
  
    // create a list of all the course names from the taxonomy tree
    $termNames = array();
    foreach ($terms as $term) {
      $termNames[$term->tid] = $term->name;
    }

    $active_tid = ims_get_active_semester();
    
    $xml = new SimpleXMLElement($fetcher_result->getRaw());
    $result = new FeedsParserResult();

    $sections = $xml->xpath('course_sections/course_section');

    foreach ($sections as $section) {
      $courseName = (string) $section->section_info['course_name'];
      $t_key = array_search($courseName, $termNames);
      if ($t_key) {
        /* 
         $guid = (string) $section->section_info['sec_name'] . "-";
        $guid .= $section->term['term_id']; 
        */
        $secNo = (string) $section->section_info['section_no'];
	
        $regItems = $section->xpath('registration/reg_item');
        foreach ($regItems as $regItem) {
          //$student['guid'] = $guid . "-" . $regItem->demographics['simmons_login'];
          $student['guid'] =  (string) $regItem->demographics['simmons_login'];
          $student['id'] = (string) $regItem->demographics['simmons_login'];
          $student['title'] = (string) $regItem->demographics['first_name'];
          $student['title'] .= " ". (string) $regItem->demographics['last_name'];
          $student['fname'] = (string) $regItem->demographics['first_name'];
          $student['lname'] = (string) $regItem->demographics['last_name'];
          $student['email'] = (string) $regItem->demographics['simmons_email'];
          $student['course_id'] = $t_key;
          $student['section_no'] = $secNo;
          $student['semester'] = $active_tid;
          $result->items[] = $student;
          unset($student);
         
        } // close:foreach($regItems as $regItem)
      } // close:if (in_array...) 
    } // close:foreach ($sections as $section) 
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
      'course_id' => array(
        'name' => t('Course ID'),
        'description' => t('The course ID for the course in which the student is enrolled.'),
      ),
      'section_no' => array(
        'name' => t('Section Number'),
        'description' => t('The section number for the course in which the student is enrolled.'),
      ),
      'semester' => array(
        'name' => t('Semester ID'),
        'description' => t('The term ID from the Semesters vocabulary.'),
      ),
    )+ parent::getMappingSources();
  }

}
