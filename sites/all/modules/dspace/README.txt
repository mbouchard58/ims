Introduction
------------

The goal of this module is to parse a DSpace REST XML feed using the Feeds 
module and process the feed items into nodes. 


Installation
------------

After you enable the "dspace" module:

1) go to admin/structure/feeds
2) edit or add an importer
3) under "Parser" choose "DSpace Feeds parser" and click "Save"
4) under "Mappings" choose the DSpace maaping source with the appropriate 
   targets then click "Save"

Once the importer is created, go to /import, click the newly created import.
Under "URL" enter your DSpace REST path to your collection
(e.g. http://dataspace.example.com/rest/collections/123.xml)

Related Links
-------------

DSpace: http://www.dspace.org/
DSpace REST API: https://wiki.duraspace.org/display/DSPACE/REST+API/
Drupal Feeds Module: http://drupal.org/project/feeds/
Drupal Biblio Module: http://drupal.org/project/biblio/
