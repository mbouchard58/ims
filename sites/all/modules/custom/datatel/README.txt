Introduction
------------

The goal of this module is to parse a Datatel XML file using the Feeds 
module and process the feed items into nodes. 


Installation
------------

After you enable the "datatel" module:

1) go to admin/structure/feeds
2) edit or add an importer
3) under "Parser" choose "Datatel Feeds parser" and click "Save"
4) under "Mappings" choose the Datatel maping source with the appropriate 
   targets then click "Save"

Once the importer is created, go to /import, click the newly created import.
Under "File" enter your Datatel path to your collection
(e.g. /gslis/datatel/raw/LS_MOODLE.xml)

Related Links
-------------

Drupal Feeds Module: http://drupal.org/project/feeds/
