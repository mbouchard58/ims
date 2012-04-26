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
    $result = new FeedsParserResult();

    $items = $xml->xpath('/collections/items/itementity[isWithdrawn != "true"]');

    foreach ($items as $item) {
      $publication['guid'] = (string) $item->handle;
      $publication['id'] = (string) $item->id;
      $publication['lastmodified'] = (string) $item->lastModified;
      $publication['title'] = (string) $item->name;
      $publication['submitter'] = (string) $item->submitter->netId;

      // Dublin Core Metadata.
      $metadata = (string) $item->metadata;
      $metadata = simplexml_load_string("<metadata>" . $metadata . "</metadata>");

      $type = $metadata->xpath('/metadata/meta[@name = "DC.type"]/@content');
      $publication['type'] = (string) $type[0]->content;

      $identifier = $metadata->xpath('/metadata/meta[@name = "DC.identifier"]/@content');
      $publication['identifier'] = (string) $identifier[0]->content;

      $number = $metadata->xpath('/metadata/meta[@name = "DC.relation" and not(@scheme)]/@content');
      $publication['number'] = (string) $number[0]->content;

      $creators = $metadata->xpath('/metadata/meta[@name = "DC.creator"]/@content');
      foreach ($creators as $creator) {
        $publication['creators'][] = (string) $creator;
      }

      $authors = $metadata->xpath('/metadata/meta[@name = "DC.contributor.author"]/@content');
      foreach ($authors as $author) {
        $publication['authors'][] = (string) $author;
      }

      $keywords = $metadata->xpath('/metadata/meta[@name = "DC.subject"]/@content');
      foreach ($keywords as $keyword) {
        $publication['keywords'][] = (string) $keyword;
      }

      $abstract = $metadata->xpath('/metadata/meta[@name = "DCTERMS.abstract"]/@content');
      $publication['abstract'] = (string) $abstract[0]->content;

      $issued = $metadata->xpath('/metadata/meta[@name = "DCTERMS.issued"]/@content');
      $publication['issued'] = (string) $issued[0]->content;

      $citation = $metadata->xpath('/metadata/meta[@name = "DCTERMS.bibliographicCitation"]/@content');
      $publication['citation'] = (string) $citation[0]->content;

      $result->items[] = $publication;
      unset($publication);
    }

    return $result;
  }

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
      'authors' => array(
        'name' => t('Authors'),
        'description' => t('Authors of the feed item.'),
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
    )+ parent::getMappingSources();
  }

}