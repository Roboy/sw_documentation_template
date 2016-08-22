System Scope and Context
========================

**Contents.**

The context view defines the boundaries of the system under development
to distinguish it from neighboring systems. It thereby identifies the
system’s relevant external interfaces, defining the **software requirements aspects** of **user interfaces** and **technical interfaces**.


**Motivation.**

The interfaces to neighboring systems are among most critical and risky
aspects of a project. Ensure early on that you have understood them in
their entirety.

-  Various context diagram (see below)

-  Lists of neighboring systems and their interfaces.

.. _regulatory-requirements:

Relevant Regulatory Requirements
--------------------------------

- List of regulatory requirements
- that are applicable to this system

.. _required-safety-class:

Software Safety Class
---------------------

This software requires the software safety class: **A**

The default is: A

.. todo::
	Input the required safety class

.. _external-interfaces:

Context and External Interfaces Overview
-----------------------------------------

**Contents.**

Identify all
neighboring systems and specify all logical business data that is
exchanged with the system under development.


List of all (a-l-l) neighboring systems.

**Motivation.**

Understanding the information exchange with neighboring systems (i.e.
all input flows and all output flows).

**Form.**

.. figure:: images/uml_system_context.*

	**UML-type context diagram** - shows the birds eye view of the system (black box) described by this architecture within the ecosystem it is to be placed in. Shows orbit level interfaces on the user interaction and component scope.


.. _user-interfaces:

User Interfaces
----------------

**Contents.**

Specification of the **User Interaction Behaviour** (Dynamic and Static) based on stakeholder requirements.

**Motivation.**

Understanding and communication with the stakeholder regarding the User interaction, especially the GUI.


.. _dynamic-UI-requirements:

Dynamic UI Behaviour
^^^^^^^^^^^^^^^^^^^^

.. figure:: images/flow_replace_me.*

	Diagram showing the dynamic behaviour of the user interface i.e. State diagram

.. _static-UI-requirements:

Static UI
^^^^^^^^^

.. figure:: images/wireframe_kit_free_11.*

	Mock-up screens of the individual views/screens of the GUI i.e. Wireframes, whiteboard sketches 



.. _technical-interfaces:

Technical Interface
-------------------

This section describes the data interfaces to other systems around it. It follows the 4 levels of interoperability (**IO**):

- Structural interoperability
- Syntactic interoperability
- Semantic interoperability
- Organisatorial interoperability

.. _technical-interfaces-template:

Interface Template
^^^^^^^^^^^^^^^^^^^^

.. _technical-interfaces-table-template:

+---------------------+------------------------------------------------------+
| Interface ID        |                                                      |
+=====================+======================================================+
| Name                | Name of the Interface                                |
+---------------------+------------------------------------------------------+
| Version             |                                                      |
+---------------------+------------------------------------------------------+
| Structural IO       | Datastreams btwn systems. i.e. TCP/IP, RS232, ...    |
+---------------------+------------------------------------------------------+
| Syntactic IO        | Units within the stream. i.e. XML, CSV, HL7, DICOM   |
+---------------------+------------------------------------------------------+
| Semantic IO         | Common definition of unit meaning.                   |
+---------------------+------------------------------------------------------+
| Organisatorial IO   | Workflows, Roleconcepts,...                          |
+---------------------+------------------------------------------------------+
| Contact person(s)   |                                                      |
| or organization     |                                                      |
+---------------------+------------------------------------------------------+

Table: Interface Template
