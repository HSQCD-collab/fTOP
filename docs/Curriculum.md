# fTOP Curriculum
---

## Overview

This curriculum provides a comprehensive, phased approach to mastering the software ecosystem used in High Energy Physics (HEP) experiments. It progresses from foundational tools through to advanced, experiment-specific frameworks, culminating in hands-on work with real experimental data. Each phase builds upon the previous, ensuring a coherent and practical learning experience.

---

## Phase 1: Foundations and Core Tools

### Description

This phase establishes the essential technical foundation for all HEP data analysis work. Students are introduced to ROOT — the industry-standard data analysis framework developed at CERN — alongside the statistical principles that underpin all experimental measurements in particle physics. Python-based tooling for modern HEP analysis is also introduced, bridging traditional C++ workflows with contemporary data science practices.

### Topics

**ROOT Framework**
ROOT is an object-oriented framework written in C++ and widely used across HEP experiments for data storage, processing, and visualization. Students learn to navigate ROOT files, create and manipulate histograms, perform fits, and write analysis macros in both C++ and Python.

**Statistical Methods Foundation**
A rigorous grounding in statistical inference as applied to particle physics. Topics include probability theory, parameter estimation (maximum likelihood, least squares), hypothesis testing, confidence intervals, and systematic uncertainties. These concepts are essential for interpreting any experimental result.

**Python for HEP Analysis**
Modern HEP analysis increasingly relies on Python-based tools. This section introduces `uproot` for reading ROOT files natively in Python and `awkward-array` for efficiently handling the complex, nested, variable-length data structures characteristic of particle physics event data.

### Phase Outcomes

By the end of Phase 1, students will be able to:
- Open, read, and manipulate ROOT files using both C++ macros and Python scripts
- Produce, style, and interpret histograms and fit results within ROOT
- Apply core statistical concepts — likelihood functions, hypothesis tests, confidence intervals — to physics problems
- Read HEP data into Python using `uproot` and perform array-based manipulations with `awkward-array`
- Understand the structure of typical HEP event data and how it is stored

### Resources

| Resource | Description |
|---|---|
| [ROOT Primer (Beginner's Guide)](https://root.cern.ch/root/htmldoc/guides/primer/ROOTPrimer.html) | Complete introduction to ROOT with hands-on examples |
| [ROOT Manual](https://root.cern/manual/) | Comprehensive official documentation covering all aspects |
| [First Steps with ROOT](https://root.cern/manual/first_steps_with_root/) | Getting started guide |
| [ROOT Tutorials](https://root.cern/tutorials/) | Collection of C++ macros and Python scripts for learning |
| [ROOT Reference Documentation](https://root.cern/doc/master/) | Complete API reference for advanced usage |
| [Statistical Data Analysis — Glen Cowan](https://www.pp.rhul.ac.uk/~cowan/sda/) | Classic textbook with exercises and solutions |
| [Glen Cowan's Statistical Methods Lectures](http://www.pp.rhul.ac.uk/~cowan/stat_aachen.html) | Comprehensive lecture series with problem sheets |
| [Statistical Methods for Data Analysis in Particle Physics — Luca Lista (2023)](https://link.springer.com/book/10.1007/978-3-031-19934-9) | Most recent edition, includes machine learning chapter |
| [Data Analysis in Particle Physics — Cesare Bini (PDF)](https://www.roma1.infn.it/~bini/StatEPP_new.pdf) | Lecture notes from Sapienza Università |
| [Uproot Documentation](https://uproot.readthedocs.io/en/latest/basic.html) | Getting started with modern Python ROOT I/O |
| [Uproot Tutorial — Mason Proffitt](https://masonproffitt.github.io/uproot-tutorial/aio/index.html) | Complete hands-on tutorial |
| [Awkward Array Documentation](https://github.com/scikit-hep/awkward-0.x) | Manipulating complex nested data structures |
| [PyHEP 2021 Uproot and Awkward Tutorial](https://indico.cern.ch/event/1019958/contributions/4430420/) | Advanced topics including $H\rightarrow ZZ\rightarrow4\mu$ analysis |

---

## Phase 2: Advanced Statistical Analysis

### Description

Building on the statistical foundations of Phase 1, this phase introduces professional-grade statistical modeling tools used in published HEP results. Students learn to construct complex probability models using RooFit, perform frequentist and Bayesian inference with RooStats, and apply multivariate analysis (MVA) techniques using ROOT's built-in machine learning toolkit, TMVA.

### Topics

**RooFit and RooStats**
RooFit is a toolkit for modeling probability density functions (PDFs) and performing unbinned maximum likelihood fits — the standard method for extracting physics results from data. RooStats extends this with tools for hypothesis testing, limit-setting, and discovery significance calculations, forming the statistical backbone of most major HEP analyses.

**Machine Learning with TMVA**
TMVA (Toolkit for Multivariate Analysis) provides a unified interface for training and applying machine learning classifiers within the ROOT environment. Students learn to implement Boosted Decision Trees (BDTs), neural networks, and other discriminants to separate signal from background, a core technique in modern particle physics searches.

### Phase Outcomes

By the end of Phase 2, students will be able to:
- Build and fit probability density function models using RooFit
- Construct statistical tests, compute p-values and confidence limits using RooStats
- Train and evaluate multivariate classifiers (BDTs, MLPs) with TMVA
- Understand the workflow of a signal extraction analysis from data model construction through to result interpretation
- Apply these tools to realistic analysis scenarios typical of CMS or ATLAS analyses

### Resources

| Resource | Description |
|---|---|
| [RooFit Manual (ROOT)](https://root.cern/manual/roofit/) | Official documentation for probability density functions |
| [RooStats Workbook](https://roostatsworkbook.readthedocs.io/en/latest/) | Documentation with practical examples |
| [RooStats Workbook GitHub](https://github.com/roofit-dev/RooStatsWorkbook) | Includes 2018 Terascale Statistics School materials |
| [RooFit Basics Tutorial (CMS Combine)](https://cms-analysis.github.io/HiggsAnalysis-CombinedLimit/part5/roofit/) | Practical introduction to fitting |
| [CMS Statistics Exercise](https://people.na.infn.it/~lista/Statistics/code/05-RooStats-CMS-DAS/TWiki.html) | Hands-on RooStats tutorial |
| [NA62 RooFit/RooStats Tutorials](https://gitlab.cern.ch/NA62FW/NA62Stats) | Practical statistical treatment examples |
| [TMVA Manual (ROOT)](https://root.cern/manual/tmva/) | Complete guide to machine learning in ROOT |
| [TMVA Users Guide (PDF)](https://root.cern.ch/download/doc/tmva/TMVAUsersGuide.pdf) | Comprehensive documentation |
| [TMVA Classification Tutorial](https://root.cern/doc/master/TMVAClassification_8C.html) | Example code and documentation |
| [MultiVariate Analysis Tutorial — Francesco Gravili (PDF)](https://agenda.infn.it/event/13733/contributions/20520/attachments/14642/16541/MVATutorial.pdf) | Step-by-step guide to MVA |

---

## Phase 3: Simulation Tools and Frameworks

### Description

Simulation is the cornerstone of HEP experiment design and data interpretation. This phase covers the three principal simulation tools in modern HEP: Geant4 for full, physics-accurate detector simulation; Delphes for fast parametric simulation suitable for phenomenological studies; and DD4hep for structured, experiment-agnostic detector geometry description.

### Topics

**Geant4 — Full Detector Simulation**
Geant4 is the industry-standard Monte Carlo toolkit for simulating the passage of particles through matter. It handles all relevant physics processes — electromagnetic, hadronic, and optical — and is used by virtually every major HEP experiment worldwide. Students learn to construct detector geometries, define materials and physics lists, and process simulated particle interactions.

**Delphes — Fast Parametric Simulation**
While Geant4 is highly accurate, it is computationally expensive. Delphes provides a fast, parameterized simulation of detector response, ideal for phenomenological studies, feasibility studies, and detector optimization. It reads generator-level events and applies smearing functions to mimic detector effects, outputting analysis-ready data.

**DD4hep — Detector Description Toolkit**
DD4hep provides a unified, modular approach to describing detector geometry that is compatible with both Geant4 and Delphes workflows. It separates the detector description from the simulation engine, enabling reuse across different software frameworks and experiments. This is essential for future collider projects such as FCC and ILC.

### Phase Outcomes

By the end of Phase 3, students will be able to:
- Build and run a basic Geant4 simulation application with a custom detector geometry and physics list
- Interpret Geant4 output and understand how simulated hits relate to detector response
- Run fast simulation workflows using Delphes with custom detector cards
- Describe a detector geometry using DD4hep and interface it with simulation engines
- Understand the trade-offs between full and fast simulation and when each is appropriate

### Resources

| Resource | Description |
|---|---|
| [Getting Started with Geant4](https://geant4.web.cern.ch/docs/getting-started) | Introduction and installation guide |
| [Geant4 Documentation](https://geant4.web.cern.ch/docs/) | Complete user guides and reference manuals |
| [Geant4 Application Developers Guide](https://geant4.web.cern.ch/docs/) | How to build simulation applications |
| [Geant4 Physics Reference Manual](https://geant4.web.cern.ch/docs/) | Detailed physics interactions documentation |
| [Geant4 Tutorials](https://geant4.web.cern.ch/docs/tutorials) | Official tutorial materials |
| [Geant4 Advanced Examples](https://geant4.web.cern.ch/docs/advanced_examples_doc/) | Realistic experimental applications |
| [Delphes Website](https://delphes.github.io/) | Official documentation and resources |
| [Delphes GitHub Repository](https://github.com/delphes/delphes) | Source code and quick start guide |
| [DELPHES 3 Paper (arXiv:1307.6346)](https://arxiv.org/abs/1307.6346) | Technical description of the framework |
| [Delphes Tutorial — Jan Eysermans (PDF)](https://indico.mit.edu/event/876/contributions/2816/attachments/1060/1744/US_FCC_MIT_26032024.pdf) | FCC workshop tutorial |
| [Software Tutorial: LCIO and Delphes](https://indico.fnal.gov/event/45413/contributions/196321/attachments/135130/167579/ilc_tutorial2_potter.pdf) | Snowmass Energy Frontier tutorial |
| [DD4hep GitHub Repository](https://github.com/AIDASoft/DD4hep) | Main source code and documentation |
| [DD4hep User Manual (PDF)](https://dd4hep.web.cern.ch/dd4hep/usermanuals/DD4hepManual/DD4hepManual.pdf) | Complete technical documentation |
| [DD4hep Introduction](https://dd4hep.web.cern.ch/dd4hep/usermanuals/DD4hepManual/DD4hepManualch1.html) | General overview and architecture |
| [DD4hep Code Reference](https://dd4hep.web.cern.ch/dd4hep/reference/) | API documentation |
| [DD4hep Paper (arXiv)](https://www.researchgate.net/publication/263050232_DD4hep_A_Detector_Description_Toolkit_for_High_Energy_Physics_Experiments) | Technical publication |

---

## Phase 4: Event Data Models and Processing Frameworks

### Description

Modern HEP experiments require robust, standardized data models and processing frameworks to manage the enormous volume and complexity of collision event data. This phase introduces EDM4hep — the common event data model for future collider experiments — and the Gaudi framework, the algorithmic processing backbone used by LHCb, ATLAS, and future experiment software stacks.

### Topics

**EDM4hep — Common Event Data Model**
EDM4hep defines a standardized, experiment-agnostic representation of physics objects (tracks, clusters, jets, particles) produced during event reconstruction. Built on top of the Podio I/O framework, it enables interoperability between different simulation, reconstruction, and analysis tools. Understanding EDM4hep is essential for anyone working in the Key4hep or FCC software ecosystem.

**Gaudi Framework**
Gaudi is a C++ software framework designed for building HEP data processing applications. It provides a clean, modular architecture separating algorithms, services, and data objects, allowing complex processing pipelines to be composed from reusable components. Originally developed for LHCb, it now underpins many experiment software stacks including the FCC software chain.

### Phase Outcomes

By the end of Phase 4, students will be able to:
- Navigate and work with EDM4hep data structures for reconstructed physics objects
- Understand the role of Podio as the I/O layer underpinning EDM4hep
- Write and configure Gaudi algorithms for custom event processing tasks
- Understand the architecture of a Gaudi-based application (algorithms, tools, services, and the event store)
- Connect simulation output to downstream analysis through standardized data models

### Resources

| Resource | Description |
|---|---|
| [EDM4hep GitHub Repository](https://github.com/key4hep/EDM4hep) | Source code and basic documentation |
| [EDM4hep API Reference](https://edm4hep.web.cern.ch/) | Doxygen documentation |
| [EDM4hep Tutorial in Key4hep](https://key4hep.github.io/key4hep-doc/how-tos/key4hep-tutorials/edm4hep_analysis/edm4hep_api_intro.html) | Practical introduction |
| [EDM4hep YAML Definition](https://github.com/key4hep/EDM4hep/blob/main/edm4hep.yaml) | Complete data model specification |
| [EDM4hep Paper (ICHEP 2022)](https://agenda.infn.it/event/28874/contributions/169202/attachments/94583/129541/gaede_edm4hep_ichep22.pdf) | Technical presentation |
| [EDM4hep and Podio (CDS)](https://cds.cern.ch/record/2814349/files/document.pdf) | Detailed technical documentation |
| [Gaudi Documentation Homepage](https://gaudi-framework.readthedocs.io/en/latest/) | Main documentation portal |
| [Gaudi Introduction](https://gaudi-framework.readthedocs.io/en/latest/old/GDG_Overview.html) | User guide and tutorial overview |
| [Gaudi Architecture](https://gaudi-framework.readthedocs.io/en/latest/old/GDG_Architecture.html) | Framework design and concepts |
| [Gaudi Services](https://gaudi-framework.readthedocs.io/en/latest/old/GDG_Services.html) | Framework services documentation |
| [Gaudi Developers Guide](https://gaudi-framework.readthedocs.io/en/latest/old/GDG.html) | Complete reference |

---

## Phase 5: Key4hep and FCC Software Stacks

### Description

This phase brings together the tools and concepts from previous phases into complete, integrated software stacks targeting future collider experiments. Key4hep is the common software framework for next-generation experiments (FCC, ILC, CLIC, CEPC), integrating Gaudi, EDM4hep, DD4hep, Geant4, and Delphes into a coherent, deployable ecosystem. The FCC software stack is examined as the primary concrete application of Key4hep.

### Topics

**Key4hep Framework**
Key4hep is the overarching software initiative that integrates all the component tools studied in previous phases into a unified, turnkey framework. It provides the glue layer that allows DD4hep geometry to drive Geant4 simulation, whose output is stored in EDM4hep format, processed through Gaudi algorithms, and analyzed with Python-based tools. Students learn to set up, configure, and extend a full Key4hep workflow.

**FCC Software Stack**
The Future Circular Collider (FCC) software stack is built entirely on Key4hep and provides a complete environment for FCC-ee, FCC-hh, and FCC-he studies. It includes configuration for fast simulation with Delphes (via k4SimDelphes), full simulation with Geant4 (via k4SimGeant4), and a dedicated analysis framework (FCCAnalyses) built on ROOT's RDataFrame. This phase gives students practical experience with a realistic future-experiment software environment.

### Phase Outcomes

By the end of Phase 5, students will be able to:
- Set up and configure a full Key4hep software environment
- Run end-to-end simulation and reconstruction workflows within Key4hep
- Use k4SimGeant4 for full simulation and k4SimDelphes for fast simulation in the FCC context
- Write analysis code using the FCCAnalyses framework and RDataFrame
- Understand how the different components (DD4hep, Gaudi, EDM4hep, Geant4, Delphes) integrate within a unified software stack

### Resources

| Resource | Description |
|---|---|
| [Key4hep Documentation](https://key4hep.github.io/key4hep-doc/) | Central documentation hub |
| [Getting Started with Key4hep](https://key4hep.github.io/key4hep-doc/setup-and-getting-started/README.html) | Installation and setup |
| [Key4hep Tutorials GitHub](https://github.com/key4hep/key4hep-tutorials) | Complete tutorial collection |
| [Key4hep Introduction Tutorial](https://github.com/key4hep/key4hep-tutorials/blob/main/introduction_key4hep/README.md) | Prerequisites and basic introduction |
| [Developing Key4hep Software](https://key4hep.github.io/key4hep-doc/developing-key4hep-software/README.html) | Developer documentation |
| [k4FWCore GitHub](https://github.com/key4hep/k4FWCore) | Core components for Gaudi-based framework |
| [k4SimGeant4 GitHub](https://github.com/key4hep/k4SimGeant4) | Geant4 simulation components |
| [FCC Software Homepage](https://hep-fcc.github.io/FCCSW/) | Main entry point and links |
| [FCC Tutorials](https://hep-fcc.github.io/fcc-tutorials/) | Complete tutorial collection |
| [FCC Software Stack Overview](https://hep-fcc.github.io/FCCSW/stack/stack.html) | Software ecosystem description |
| [FCCSW GitHub Repository](https://github.com/HEP-FCC/FCCSW) | High level repository |
| [FCC Software Introduction Tutorial](https://hep-fcc.github.io/fcc-tutorials/main/software-basics/fccsw.html) | Getting started with FCCSW |
| [FCC Prerequisites](https://hep-fcc.github.io/fcc-tutorials/main/software-basics/prerequisites.html) | Platform requirements and setup |
| [FCC Software Forum](https://fccsw-forum.web.cern.ch/) | Support and discussions |
| [FCC Delphes Tutorial](https://github.com/HEP-FCC/fcc-tutorials/blob/main/fast-sim-and-analysis/k4simdelphes/doc/starterkit/FccFastSimDelphes/Readme.md) | Fast simulation with Delphes |
| [FCCAnalyses Problems and Solutions](https://hep-fcc.github.io/fcc-tutorials/main/fast-sim-and-analysis/FCCAnalysesProblemsAndSolutions.html) | Common issues and fixes |

---

## Phase 6: Experiment-Specific Frameworks

### Description

While phases 1–5 focus on general-purpose and future-experiment frameworks, this phase provides exposure to the software used in currently operating large-scale experiments. The ATLAS Athena framework is studied as a representative example of a mature, production-grade experiment software system, illustrating how the concepts from previous phases manifest in real experimental contexts.

### Topics

**ATLAS Athena Framework**
Athena is the software framework underpinning all ATLAS data processing, from online event selection through offline reconstruction and analysis. It is built on Gaudi and uses ATLAS's own event data model (xAOD). Students learn to navigate the Athena software environment, understand the xAOD data format, and perform analysis-level tasks using the ATLAS Analysis Base release. This provides crucial context for understanding what production HEP software at scale looks like.

### Phase Outcomes

By the end of Phase 6, students will be able to:
- Set up an ATLAS software environment and navigate the Athena framework
- Understand the xAOD event data model and access physics objects from reconstructed data
- Write basic analysis algorithms within the Athena/AnalysisBase framework
- Appreciate how a large-scale experiment manages software releases, versioning, and data formats
- Relate Athena's architecture back to the Gaudi concepts studied in Phase 4

### Resources

| Resource | Description |
|---|---|
| [Athena Introduction](https://atlas-software.docs.cern.ch/athena/basics/intro/) | Framework basics |
| [ATLAS Software Documentation](https://atlassoftwaredocs.web.cern.ch/) | Complete documentation portal |
| [ATLAS Analysis Software Tutorial](https://atlassoftwaredocs.web.cern.ch/analysis-software/ABtutorial/) | Hands-on xAOD analysis |
| [Athena I/O and xAOD EDM](https://atlas-software.docs.cern.ch/athena/io/) | Data format and event data model |
| [Athena Releases Documentation](https://atlas-software.docs.cern.ch/athena/developers/releases/) | Version management |

---

## Phase 7: Practical Application with Real Data

### Description

This phase moves from tools and frameworks to genuine scientific practice, applying everything learned in previous phases to real collision data made publicly available by CERN. Students perform end-to-end analyses on CMS and ATLAS open datasets, including the reproduction of landmark results such as the Higgs boson discovery. This phase consolidates all prior learning in a scientifically meaningful context.

### Topics

**CERN Open Data Analysis**
CERN makes real collision data from CMS and ATLAS publicly available through the CERN Open Data Portal. Students perform complete analysis workflows: accessing data, applying selection criteria, modeling signal and background, and extracting a physics result. The flagship exercise is an independent rediscovery of the Higgs boson in the $H\rightarrow ZZ$ channel using 2011–2012 CMS data, mirroring the actual discovery analysis.

### Phase Outcomes

By the end of Phase 7, students will be able to:
- Access and navigate datasets from the CERN Open Data Portal
- Understand the data formats used by CMS (AOD/MiniAOD) and ATLAS
- Perform a complete, publication-style analysis on real collision data
- Reproduce the Higgs boson discovery signal from public CMS data
- Critically evaluate analysis choices including selection criteria, systematic uncertainties, and statistical interpretation

### Resources

| Resource | Description |
|---|---|
| [CERN Open Data Portal](https://opendata.cern.ch/) | Main repository for open datasets |
| [CMS Open Data Guide for Education](https://opendata.cern.ch/docs/cms-guide-for-education) | Educational resources |
| [CMS HEP Tutorial](https://opendata.cern.ch/record/50) | One-week course with real CMS data |
| [ATLAS Open Data](https://atlas.cern/Resources/Opendata) | ATLAS open data resources |
| [Higgs Discovery Example](https://github.com/cms-opendata-analyses/HiggsExample20112012) | Re-discover the Higgs boson |
| [About CMS Open Data](https://opendata.cern.ch/docs/about-cms) | Understanding CMS data formats |
| [About ATLAS Open Data](https://opendata.cern.ch/docs/about-atlas) | Understanding ATLAS data formats |

---

## Phase 8: Community Training and Best Practices

### Description

This phase situates the student within the broader HEP software community and addresses software engineering practices specific to physics research. It covers the HEP Software Foundation's training ecosystem and the foundational software engineering skills — version control, scripting, C++ proficiency — that are expected of any working HEP physicist or software developer.

### Topics

**HEP Software Foundation Training**
The HEP Software Foundation (HSF) coordinates community-wide training initiatives through partnerships with IRIS-HEP and other organizations. Students engage with the structured HSF training curriculum covering Unix shell, Git, Python, and software carpentry, establishing the collaborative software development habits essential in large experimental collaborations.

**Software Engineering for Physicists**
C++ remains the primary language of HEP software infrastructure. This section provides a systematic treatment of C++ as applied in a HEP context: memory management, templates, object-oriented design patterns, and best practices for writing maintainable, efficient physics software. The emphasis is on practices that are specifically relevant to the challenges encountered in large HEP codebases.

### Phase Outcomes

By the end of Phase 8, students will be able to:
- Use Git effectively for version control in a collaborative development context
- Write well-structured, maintainable C++ code following HEP community conventions
- Navigate and contribute to large, community-maintained software repositories
- Understand the HSF training landscape and how to engage with community resources
- Apply software carpentry skills (Unix shell, scripting, testing) in a physics workflow

### Resources

| Resource | Description |
|---|---|
| [HSF Training Center](https://hepsoftwarefoundation.org/) | Central hub for HEP software training |
| [HSF Training GitHub](https://github.com/hsf-training) | All training modules and materials |
| [HSF/IRIS-HEP Software Basics Training](https://indico.cern.ch/event/1516608/) | Unix, Git, Python fundamentals |
| [IRIS-HEP Training Program](https://iris-hep.org/ssc.html) | Complete training vision |
| [C++ in Particle Physics Guide](https://www.numberanalytics.com/blog/ultimate-guide-cpp-particle-physics) | Best practices overview |
| [Introduction to C++ for Particle Physicists](https://www.whbell.net/resources/HepCppIntro/) | Course with HEP examples |
| [C++ Programming for Physicists (PDF)](https://www.whbell.net/resources/HepCppIntro/HepCppIntroGuide-2009-06-03.pdf) | Comprehensive guide |
| [Education and Training for Software Developers in Particle Physics](https://link.springer.com/article/10.1007/s41781-020-00046-8) | Pedagogical perspectives |

---

## Phase 9: Advanced and Specialized Topics

### Description

The final phase consolidates and extends expertise in the two areas most central to cutting-edge HEP analysis: advanced ROOT functionality and sophisticated statistical methods. Students explore features of ROOT that go beyond basic usage — particularly RDataFrame for modern, parallel, declarative analysis — and deepen their statistical grounding with advanced inference techniques used in flagship analyses.

### Topics

**Advanced ROOT Features**
RDataFrame is ROOT's modern, functional-style analysis interface that enables lazy evaluation and automatic parallelization of analysis workflows. TMVA SOFIE (Speedy Operators for Fast Inference Engines) allows trained neural networks from external frameworks (TensorFlow, PyTorch, ONNX) to be deployed directly within ROOT for fast inference. These represent the current state of the art in ROOT-based analysis.

**Advanced Statistical Concepts**
This section revisits statistical methods at a deeper level, covering topics such as the CLs method for limit setting, the profile likelihood ratio test statistic, systematic uncertainty treatment via nuisance parameters, and Bayesian inference with posterior sampling. These are the techniques used in the most precise measurements and sensitive searches published by ATLAS and CMS.

### Phase Outcomes

By the end of Phase 9, students will be able to:
- Write efficient, parallelized analyses using RDataFrame
- Deploy trained neural networks within ROOT using TMVA SOFIE
- Apply the CLs method and profile likelihood ratio for setting exclusion limits
- Incorporate nuisance parameters to handle systematic uncertainties in a likelihood model
- Critically read and understand the statistical sections of ATLAS and CMS publications

### Resources

| Resource | Description |
|---|---|
| [ROOT Data Analysis Framework](https://root.cern/manual/) | RDataFrame, advanced histograms, fitting |
| [TMVA SOFIE](https://root.cern/manual/tmva/) | Fast inference for neural networks |
| [Statistical Methods Lecture Notes — Glen Cowan (PDF)](https://people.sc.fsu.edu/~sshanbhag/Cowan_Statistics.pdf) | Advanced statistical concepts |

---

## Summary: Curriculum Roadmap

| Phase | Focus Area | Key Technologies |
|---|---|---|
| 1 | Foundations and Core Tools | ROOT, Python, uproot, awkward-array |
| 2 | Advanced Statistical Analysis | RooFit, RooStats, TMVA |
| 3 | Simulation Tools | Geant4, Delphes, DD4hep |
| 4 | Event Data Models and Processing | EDM4hep, Podio, Gaudi |
| 5 | Key4hep and FCC Software | Key4hep, k4SimGeant4, FCCAnalyses |
| 6 | Experiment-Specific Frameworks | ATLAS Athena, xAOD |
| 7 | Practical Application with Real Data | CERN Open Data, CMS/ATLAS datasets |
| 8 | Community Training and Best Practices | HSF, C++, Git, software engineering |
| 9 | Advanced and Specialized Topics | RDataFrame, TMVA SOFIE, advanced statistics |
