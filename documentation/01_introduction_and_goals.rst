Introduction and Goals
======================

This document documents the software requirements and describes how the SCRUM team plans to implement them.
- It should allow the developers to ideally develop the system without having to ask questions or take ad-hoc requirements.
- It should ease the onboarding of new team members
- It should inform the testers on how to run and test the system

The introduction to the architecture documentation should list the
driving forces that software architects must consider in their
decisions. This includes on the one hand the fulfillment of functional
requirements of the stakeholders, on the other hand the fulfillment of
or compliance with required constraints, always in consideration of the
architecture goals.

.. _relevant_documents:

Relevant Documents
------------------

Links to the relevant documents such as

- VA Softwarentwicklung
- Entwicklungsplan / Wartungsplan
- Risikomanagement Akte
- 

.. _requirements_overview:

Requirements Overview
---------------------

The **stakeholder requirements** are found in the corresponding `Jira
<https://devanthro.atlassian.net/wiki/>`_ **instance.**
The user stories link to the relevant system tests.

.. todo:: 
	Insert link to the stakeholder requirements

The **software requirements** define the system from a blackbox/interfaces perspective. They are split into the following sections:

- **User Interfaces** - :ref:`user-interfaces`
- **Technical Interfaces** - :ref:`technical-interfaces`
- **Runtime Interfaces and Constraints** - :ref:`runtime_interfaces`

The *Produktbeschreibung* and especially the *Zweckbestimmung* give an overview of the intended use of this system.

.. todo::
	Insert link to the Produktbeschreibung

	Insert link to the Zweckbestimmung

.. _quality_goals:

Quality Goals
-------------

**Contents.**

The top three (max five) goals for the architecture and/or constraints
whose fulfillment is of highest importance to the major stakeholders.
Goals that define the architecture’s quality could be:

-  availability

-  modifiability

-  performance

-  security

-  testability

-  usability

**Motivation.**

If you as an architect do not know how the quality of your work can be
judged …

**Form.**

Simple tabular representation, ordered by priorities

**Background Information.**

**NEVER** start developing an architecture if these goals have not been
put into writing and have not been signed by the major stakeholders.


**Sources.**

The DIN/ISO 92000 Standard contains an extensive set of possible quality
goals.

Stakeholders
------------

**Contents.**

A list of the most important persons or organizations that are affected
by or can contribute to the architecture.

**Motivation.**

If you do not know the persons participating in or concerned with the
project you may get nasty surprises later in the development process.
Should your project manager maintain this list, make sure that all the
people influencing the architecture are part of it.

**Form.**

Simple table with role names, person names, their knowledge as
pertaining to architecture, their availability, etc. .Stakeholders

+--------------------------+-------------------------------------------------+
| Role/Name                | Goal/Boundaries                                 |
+==========================+=================================================+
| Expected Participation   | The name or role of a stakeholder               |
| and Contribution         |                                                 |
+--------------------------+-------------------------------------------------+
| Why will this            | what do you expect as a contribution            |
| stakeholder have an      |                                                 |
| interest in the          |                                                 |
| architecture?            |                                                 |
+--------------------------+-------------------------------------------------+
