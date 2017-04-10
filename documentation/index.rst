.. Software Documentation template master file, created by
   sphinx-quickstart on Fri Jul 29 19:44:29 2016.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

Welcome to Software Documentation Template!
===========================================================


.. todo::
  Introduce your project and describe what its intended goal and use is.


.. _background_prerequisits:

Relevant Background Information and Pre-Requisits
--------------------------------------------------

.. todo::
  Describe what a potential user needs to be familiar with. What should they read and understand beforehand

  Describe what a developer needs to be familiar with to further understand the code.

  Link to relevant documents or create a new page and add them there.


.. _requirements_overview:

Requirements Overview
---------------------

The **software requirements** define the system from a blackbox/interfaces perspective. They are split into the following sections:

- **User Interfaces** - :ref:`user-interfaces`
- **Technical Interfaces** - :ref:`technical-interfaces`
- **Runtime Interfaces and Constraints** - :ref:`runtime_interfaces`


TODO:
======
.. todolist::

Contents:

.. _usage:
.. toctree::
  :maxdepth: 1
  :glob:
  :caption: Usage and Installation

  Usage/*

.. _ScopeContext:
.. toctree::
  :maxdepth: 1
  :glob:
  :caption: Interfaces and Scope

  ScopeContext/*

.. _development:
.. toctree::
  :maxdepth: 1
  :glob:
  :caption: Development

  development/*

.. toctree::
   :maxdepth: 1

   about-arc42
