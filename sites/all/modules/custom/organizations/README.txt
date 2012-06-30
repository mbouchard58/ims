Introduction
------------

The goal of this module is to parse an organizations XML file from the old internship system using the Feeds module and process the feed items into nodes. This should only have to be used once.


Installation
------------

After you enable the "organizations" module:

1) go to admin/structure/feeds
2) edit or add an importer
3) under "Parser" choose "Organizations Feeds parser" and click "Save"
4) under "Mappings" choose the Organizations mapping source with the appropriate 
   targets then click "Save"

Once the importer is created, go to /import, click the newly created import.
Under "File" enter your Organizatons path to your collection
(e.g. /gslis/organizations/raw/organizations.xml)

Related Links
-------------

Drupal Feeds Module: http://drupal.org/project/feeds/
