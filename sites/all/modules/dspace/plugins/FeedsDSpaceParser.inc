<?php

/**
 * @file
 * Feeds DSpace parser
 */

/**
 * Class definition for DSpace Parser.
 *
 * Parses DSpace REST API feed.
 */
class FeedsDSpaceParser extends FeedsParser {

  /**
   * Implements FeedsParser::parse().
   */
  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {
    $xml = new SimpleXMLElement($fetcher_result->getRaw());
    // dvm($xml, $name = NULL);
    $result = new FeedsParserResult();

    $items = $xml->xpath('/items_collection/items[isWithdrawn != "true"]');
    //kpr($items, $return = false, $name = NULL);

    foreach ($items as $item) {
      //dvr($item, $name = NULL);

      $publication['guid'] = (string) $item->handle;
      $publication['id'] = (string) $item->id;
      $publication['lastmodified'] = (string) $item->lastModified;
      $publication['title'] = (string) $item->name;
      $publication['submitter'] = (string) $item->submitter->email;
      $publication['collection'] = (string) $item->collections->collectionentity->name;

      // Dublin Core Metadata.

      $mdEntities = $item->xpath('metadata/metadataentity');
      //dvr($mdEntities[0], $name = NULL);

      foreach ($mdEntities as $mdEntity) {
         switch ($mdEntity->element) {
            case 'contributor':
               $publication['creators'][] = (string) $mdEntity->value;
               break;
            case 'date':
               if ($mdEntity->qualifier == 'issued') {
                   $publication['issued'] = (string) $mdEntity->value;
               }
               break;
            case 'identifier':
               $publication['identifier'] = (string) $mdEntity->value;
               break;
            case 'description':
               if ($mdEntity->qualifier == 'abstract') {
                   $publication['abstract'] = (string) $mdEntity->value;
               }
               break;
            case 'relation':
               $publication['number'] = (string) $mdEntity->value;
               break;
            case 'subject':
               $publication['keywords'][] = (string) $mdEntity->value;
               break;
            case 'type':
               $publication['type'] = (string) $mdEntity->value;
               break;
            default:
               break;
        }

/*

      $citation = $metadata->xpath('/metadata/meta[@name = "DCTERMS.bibliographicCitation"]/@content');
      $publication['citation'] = (string) $citation[0]->content;
*/
      } // close:foreach ($mdEntities as $mdEntity)

      $result->items[] = $publication;
      unset($publication);
    } // close:foreach ($items as $item) 

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
        'description' => t('Identifier of the feed item.'),
      ),
      'lastmodified' => array(
        'name' => t('Last Modified'),
        'description' => t('Last Modified of the feed item.'),
      ),
      'title' => array(
        'name' => t('Title'),
        'description' => t('Title of the feed item.'),
      ),
      'submitter' => array(
        'name' => t('Submitter'),
        'description' => t('Submitter of the feed item.'),
      ),
      'type' => array(
        'name' => t('Type'),
        'description' => t('Publication type of the feed item.'),
      ),
      'identifier' => array(
        'name' => t('Identifier'),
        'description' => t('Identifier of the feed item.'),
      ),
      'number' => array(
        'name' => t('Number'),
        'description' => t('Number of the feed item.'),
      ),
      'creators' => array(
        'name' => t('Creators'),
        'description' => t('Creators of the feed item.'),
      ),
      'keywords' => array(
        'name' => t('Keywords'),
        'description' => t('Keywords of the feed item.'),
      ),
      'abstract' => array(
        'name' => t('Abstract'),
        'description' => t('Abstract of the feed item.'),
      ),
      'issued' => array(
        'name' => t('Issued'),
        'description' => t('Issue Year of the feed item.'),
      ),
      'citation' => array(
        'name' => t('Citation'),
        'description' => t('Bibliographic citation of the feed item.'),
      ),
      'collection' => array(
        'name' => t('Collection'),
        'description' => t('Collection to which this feed item belongs.'),
      ),
    )+ parent::getMappingSources();
  }

}
