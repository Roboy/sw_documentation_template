.. _technical-interfaces:

Technical Interfaces
--------------------

This section describes the data interfaces to other systems around it. It follows 3 of the `levels of interoperability <https://en.wikipedia.org/wiki/Conceptual_interoperability>`_ (**IO**):

.. todo::
  For all your interfaces, define their first 3 `levels of interoperability <https://en.wikipedia.org/wiki/Conceptual_interoperability>`_.
  You can use your doxygen documented source code to i.e. show all members of a class.
  Find more on the `Breathe Documentation <http://breathe.readthedocs.io/en/latest/directives.html#doxygenclass>`_

- Technical interoperability - Datastreams btwn systems. i.e. TCP/IP, RS232, ...
- Syntactic interoperability - Units within the stream. i.e. XML, CSV, HL7, DICOM
- Semantic interoperability - Common definition of unit meaning.


Powerlink for MotorControl
^^^^^^^^^^^^^^^^^^^^^^^^^^
Technical IO
##############

Powerlink

Syntactic IO
##############

SDO, PDO, NMT messages

Semantic IO
##############

The package names or registers or

.. doxygenclass:: Nutshell
  :members:
