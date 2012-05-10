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

    $xml = new SimpleXMLElement($fetcher_result->getRaw());
    // dvm($xml, $name = NULL);
    $result = new FeedsParserResult();

    $sections = $xml->xpath('course_sections/course_section');
    //kpr($sections, $return = false, $name = NULL);

    foreach ($sections as $section) {
      //dvr($section, $name = NULL);
      if ($section->section_info['course_name'] == "LIS-438") {

        $guid = (string) $section->section_info['sec_name'] . "-";
        $guid .= $section->term['term_id']; 
        $courseName = (string) $section->section_info['course_name'];
        $secNo = (string) $section->section_info['section_no'];
	
        $regItems = $section->xpath('registration/reg_item');
        foreach ($regItems as $regItem) {
          // dvr($regItem->demographics, $name = NULL);

          $student['guid'] = $guid . "-" . $regItem->demographics['simmons_login'];
          $student['id'] = (string) $regItem->demographics['simmons_login'];
          $student['title'] = (string) $regItem->demographics['first_name'];
          $student['title'] .= " ". (string) $regItem->demographics['last_name'];
          $student['fname'] = (string) $regItem->demographics['first_name'];
          $student['lname'] = (string) $regItem->demographics['last_name'];
          $student['email'] = (string) $regItem->demographics['simmons_email'];
          $student['course_name'] = $courseName;
          $student['section_no'] = $secNo;
          // dvr($student, $name = NULL);
          $result->items[] = $student;
          unset($student);

	  $regCount++;
	  if ($regCount > 2) break;

        } // close:foreach($regItems as $regItem)
        $regCount = 0;

      } // close:if ($section->xpath...)

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
