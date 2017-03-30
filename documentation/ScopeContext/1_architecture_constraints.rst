Architecture Constraints
========================

.. todo::
  Describe what constraints someone further developing this software should adhere to, and why.
  Should they not use tool x or operating system y... You can use the table as below, or just put a list.

.. _runtime_interfaces:

Technical Constraints / Runtime Interface Requirements
------------------------------------------------------
.. todo::

  List all technical constraints in this section. This category covers runtime interface requirements and constraints such as:

  - Hard- and software infrastructure
  - Applied technologies
    - Operating systems
    - Middleware
    - Databases
    - Programming languages

.. csv-table:: Hardware Constraints
  :header: "Constraint Name", "Description"
  :widths: 20, 60

  "Altera FPGA", "All code is highly specific to the Altera FPGA. Intel has bought Altera and aims to integrate their SoC with FPGAs. We are on the right horse!"
  "Intel RealSense", "Only the intel real sense can sense it.."

.. csv-table:: Software Constraints
  :header: "Constraint Name", "Description"
  :widths: 20, 60

  "Altera FPGA", "All code is highly specific to the Altera FPGA. Intel has bought Altera and aims to integrate their SoC with FPGAs. We are on the right horse!"
  "Intel RealSense", "Only the intel real sense can sense it..."

.. csv-table:: Operating System Constraints
  :header: "Constraint Name", "Description"
  :widths: 20, 60

  "Windows 8 or higher", "Due to the Intel RealSense SDK only being supported on Windows, we are stuck with Windows"

.. csv-table:: Programming Constraints
  :header: "Constraint Name", "Description"
  :widths: 20, 60

  "CouchDB", "We have to use the CouchDB because the type of data we have to store changes at runtime..."


.. _conventions:
