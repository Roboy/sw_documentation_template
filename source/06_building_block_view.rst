Building Block View
===================

**Contents.**

- Static decomposition of the system into building blocks and the relationships thereof.
- Description of SOUPs
- Description of database schemata

We specify the system based on the blackbox view from :ref:`external-interfaces` by now considering it a whitebox and identifying the next layer of blackboxes inside it. We re-iterate this zoom-in until specific granularity is reached.

**Motivation.**

This is the most important view, that must be part of each architecture
documentation. In building construction this would be the floor plan.

.. _SOUPs:

SOUPS
-------

Contains a list of the SOUPs used by this system. They are clearly marked and shown in :ref:`building-block-overview`

+------------------------+-----------------------+----------+-------------------------+---------------+
| Name                   | Author, URL           | Version  | Description of its task | Safety Class  |
+========================+=======================+==========+=========================+===============+
| body row 1, column 1   | column 2              | column 3 | column 4                |               |
+------------------------+-----------------------+----------+-------------------------+---------------+
| body row 2             | ...                   | ...      |                         |               |
+------------------------+-----------------------+----------+-------------------------+---------------+

.. _DB_schemata:

Database schemata
------------------

Description of the database schemata.

Level 1
-------

.. _bb-l1-overview:

Overview
^^^^^^^^

Here you describe the white box view of level 1 according to the white
box template. SOUPs are clearly marked.

.. _building-block-overview:

.. figure:: images/05_building_blocks.png
   :alt: Bulding blocks overview

   Building blocks overview


.. todo::
    <insert overview diagram here>

.. _bb-l1-component-list:

List of components
^^^^^^^^^^^^^^^^^^

.. todo::
    Doxygen type list of components

.. _bb-l1-components:

Components
^^^^^^^^^^^^^

Building Block Name 1 (Black Box Description)
""""""""""""""""""""""""""""""""""""""""""""""

Structure according to black box template:

-  Purpose / Responsibility:

-  Interface(s):

-  Implemented User Stories:

-  Variability:

-  Performance attributes:

-  Repository / Files:

-  Other administrative information: Author, Version, Date, Revision
   History

-  Open issues:

.. todo::
    <insert the building block’s black box template here>

Building Block Name 2 (Black Box Description)
""""""""""""""""""""""""""""""""""""""""""""""
...


Level 2
-------

Describe all building blocks comprising level 1 as a series of white box
templates. The structure is given below for three building blocks and
should be duplicated as needed.


.. _bb-l2-components:

Components
^^^^^^^^^^^^^

Building Block Name 1 (White Box Description)
""""""""""""""""""""""""""""""""""""""""""""""
Shows the inner workings of the building block in form of a diagrams
with local building blocks 1 – n, as well as their relationships and
interdependencies.

.. todo::
    <insert diagram of building block 1 here>

Building Block Name 1.1 (Black Box Description)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Structure according to black box template:

-  Purpose / Responsibility:

-  Interface(s):

-  Implemented requirements:

-  Variability:

-  Performance attributes:

-  Repository / Files:

-  Other administrative information: Author, Version, Date, Revision
   History

-  Open issues:

Building Block Name 1.2 (Black Box Description)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Structure according to black box template

…


Level 3
-------

Describe all building blocks comprising level 2 as a series of white box
templates. The structure is identical to the structure of level 2.
Duplicate the corresponding sub-sections as needed. Simply use this
section structure for any additional levels you would like to describe.
