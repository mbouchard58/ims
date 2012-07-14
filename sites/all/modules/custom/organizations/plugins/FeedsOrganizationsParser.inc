<?php

/**
 * @file
 * Feeds Organizations parser
 */

/**
 * Class definition for Organizations Parser.
 *
 * Parses Organizations feed.
 */
class FeedsOrganizationsParser extends FeedsParser {

  /**
   * Implements FeedsParser::parse().
   */
  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {
    //get the tid of the Archive parent in vocabulary org_types
    $archives = taxonomy_get_term_by_name("Archive", "org_types");
    if (!$archives) {
     return FALSE;
    }
    foreach ($archives as $archive) {
     //should only be one
     $arch_tid = $archive->tid;
    }
    //get vocabulary ID for "Org Types" vocabulary
    // we need to assign the correct taxonomy ID to the organization
    $vid = taxonomy_vocabulary_machine_name_load("org_types")->vid;

    //get all the terms in the vocabulary. there should only be a few
    $terms = taxonomy_get_tree($vid);

    // create a list of all the organization types from the taxonomy tree
    $org_term_names = array();
    foreach ($terms as $term) {
      //make sure I just get the Archives ones
      if ($term->parents[0] == $arch_tid) {
       $org_term_names[$term->name] = $term->tid;
      }
    }
    
    //get vocabulary ID for "Locations" vocabulary
    // we need to assign the correct taxonomy ID to the organization
    $vid = taxonomy_vocabulary_machine_name_load("locations")->vid;

    //get all the terms in the vocabulary. there should only be a few
    $terms = taxonomy_get_tree($vid);

    // create a list of all the locations from the taxonomy tree
    $loc_term_names = array();
    foreach ($terms as $term) {
      $loc_term_names[$term->name] = $term->tid;  
    }

    $xml = new SimpleXMLElement($fetcher_result->getRaw());
    $result = new FeedsParserResult();

    $orgs = $xml->xpath('database/table');
    
    $organization = array();
    
    foreach ($orgs as $org) {
      if ((int) $org->column[5] == 0) { // deleted_flag, only want active orgs
        $organization['old_id'] =  (string) $org->column[0]; 
        $organization['title'] =  (string) $org->column[1]; 
        $organization['repository'] =  (string) $org->column[2]; 
        $organization['org_type_id'] =  (string) $arch_tid . "," . $org_term_names[(string) $org->column[3]]; 
        $organization['phone'] =  (string) $org->column[9];
        $organization['fax'] =  (string) $org->column[10];
        $organization['email1'] =  (string) $org->column[11];
        $organization['email2'] =  (string) $org->column[12];
        $organization['www'] =  (string) $org->column[14];
        $organization['addr1'] =  (string) $org->column[15];
        $organization['addr2'] =  (string) $org->column[16];
        $organization['city'] =  (string) $org->column[17];
        $organization['state'] =  (string) $org->column[18];
        $organization['zip'] =  (string) $org->column[19];
        $organization['country'] =  "US";
        $organization['loc_type_id'] =  $loc_term_names[(string) $org->column[28]]; 
        $organization['notes'] =  (string) $org->column[29];
        
        // Get domain
        $domain = "";
        if (isset($organization['email1'])) {
          $email = $organization['email1'];
        }
        else {
          $email = $organization['email2'];
        }
        
        if (strlen($email) > 0) {
          $splitIndex = strpos($email, '@')+1;
          $emailLength = strlen($email);
          $domain = substr($email, $splitIndex, $emailLength);
        }
        
        $organization['domain'] = $domain;
       
        $result->items[] = $organization;
        unset($organization);
        
     } //close: if($org->column[5] == 0)
    } // close:foreach ($orgs as $org) 
    return $result;
  } // close: function parse()

  /**
   * Implements FeedsParser::getMappingSources().
   */
  public function getMappingSources() {
    return array(
      'old_id' => array(
        'name' => t('Old ID'),
        'description' => t('ID of the organization in the legacy system'),
      ),
      'title' => array(
        'name' => t('Title'),
        'description' => t('Name of the organization.'),
      ),
      'repository' => array(
        'name' => t('Repository'),
        'description' => t('The name of the repository within the organization.'),
      ),
      'org_type_id' => array(
        'name' => t('Organization Type ID'),
        'description' => t('The tid for the term in the vocabulary Org Type.'),
      ),
      'phone' => array(
        'name' => t('Phone'),
        'description' => t('Phone.'),
      ),
      'fax' => array(
        'name' => t('FAX'),
        'description' => t('FAX.'),
      ),
      'email1' => array(
        'name' => t('Email 1'),
        'description' => t('Primary Email.'),
      ),
      'email2' => array(
        'name' => t('Email 2'),
        'description' => t('Secondary Email.'),
      ),
      'www' => array(
        'name' => t('WWW'),
        'description' => t('Web Site URL'),
      ),
      'addr1' => array(
        'name' => t('Address 1'),
        'description' => t('Address line 1.'),
      ),
      'addr2' => array(
        'name' => t('Address 2'),
        'description' => t('Address line 2.'),
      ),
      'city' => array(
        'name' => t('City'),
        'description' => t('City.'),
      ),
      'state' => array(
        'name' => t('State'),
        'description' => t('State'),
      ),
      'zip' => array(
        'name' => t('Zip'),
        'description' => t('Zip.'),
      ),
      'country' => array(
        'name' => t('Country'),
        'description' => t('Country.'),
      ),
      'loc_type_id' => array(
        'name' => t('Location Type ID'),
        'description' => t('The tid for the term in the vocabulary Location Type.'),
      ),
      'notes' => array(
        'name' => t('Notes'),
        'description' => t('Notes.'),
      ),
      'domain' => array(
        'name' => t('Domain'),
        'description' => t('Email Domain.'),
      ),
    )+ parent::getMappingSources();
  }

}
