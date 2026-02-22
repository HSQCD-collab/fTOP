# Contributing to FTOP

This document defines the GitHub workflow, contribution standards, and coordination rules for the FCC Technical Onboarding Program. All participants are expected to read and follow these guidelines from day one. Contributions that do not conform to these rules will not be accepted.

---

## Table of Contents

1. [The Golden Rule](#1-the-golden-rule)
2. [Repository Organization](#2-repository-organization)
3. [Getting Set Up](#3-getting-set-up)
4. [Branching Convention](#4-branching-convention)
5. [Commit Messages](#5-commit-messages)
6. [Pull Requests](#6-pull-requests)
7. [Issues](#7-issues)
8. [Weekly Reports](#8-weekly-reports)
9. [Learning Logs](#9-learning-logs)
10. [Session Ownership](#10-session-ownership)
11. [Activity Requirements](#11-activity-requirements)

---

## 1. The Golden Rule

**If it is not on GitHub, it does not exist.**

Attendance alone does not constitute participation. Every piece of work — notes, code, exercises, reports — must be committed to the appropriate repository. This is how contributions are tracked, how progress is measured, and how the program maintains its institutional memory.

---

## 2. Repository Organization

Work is distributed across repositories. Understanding where things belong is essential.

| What | Where |
|------|-------|
| Program documentation, schedules, weekly reports | This repository — `fTOP` |
| Code, exercises, solutions, learning logs | The relevant phase repository (e.g., `fTOP-phase-01-root`) |
| Issues for tasks and objectives | The relevant phase repository |
| Issues for program-level concerns | This repository — `fTOP` |

Never commit code or exercise solutions to the main `fTOP` repository. Never commit program-level documents to a phase repository.

---

## 3. Getting Set Up

Before making any contribution:

**Step 1 — Request access**  
Contact the program coordinator to be added to the [hsqcd-collab](https://github.com/hsqcd-collab) GitHub organization. You cannot contribute without this.

**Step 2 — Configure Git**  
Set your name and email consistently across all repositories:
```bash
git config --global user.name "Your Name"
git config --global user.email "your.email@institution.ir"
```

**Step 3 — Clone the repositories you need**  
```bash
# Main hub
git clone https://github.com/hsqcd-collab/fTOP.git

# Your current phase repository, e.g.:
git clone https://github.com/hsqcd-collab/fTOP-phase-01-root.git
```

**Step 4 — Create your learning log**  
In the current phase repository, create your personal learning log file:
```
learning-logs/your-github-username.md
```
Commit this file in your first PR to the phase repository.

---

## 4. Branching Convention

Never commit directly to `main`. All work goes through branches and pull requests.

### Branch naming

```
type/short-description
```

| Type | Use for |
|------|---------|
| `session/` | Session preparation and notes |
| `exercise/` | Exercise solutions |
| `report/` | Weekly reports (main repo only) |
| `fix/` | Corrections to existing content |
| `docs/` | Documentation updates |

### Examples

```bash
git checkout -b session/week-03-fitting
git checkout -b exercise/task-1-4-extend-ttree
git checkout -b report/week-03
git checkout -b fix/typo-phase1-readme
```

Keep branches short-lived. A branch should represent one logical piece of work and be merged or closed within the same week it was opened.

---

## 5. Commit Messages

Write commit messages that are informative to someone reading the repository history six months from now.

### Format

```
Short summary in imperative mood (max 72 characters)

Optional longer description if the change needs context.
Explain what changed and why, not how.
```

### Good examples

```
Add exponential decay fit macro for Task 1.6

Add RDataFrame solution for week 3 hands-on exercise

Fix incorrect branch name in read_tree.C

Add Week 4 session notes on RooFit basics
```

### Bad examples

```
update
fix stuff
wip
my changes
done
```

### Rules

- Use the imperative mood: "Add", "Fix", "Update", "Remove" — not "Added" or "Adding"
- Do not end the summary line with a period
- Reference the relevant issue number when applicable: `Fix histogram axis label (#12)`
- One logical change per commit — do not bundle unrelated changes together

---

## 6. Pull Requests

All contributions enter the repository through pull requests. Direct pushes to `main` are not permitted for anyone except the program coordinator in exceptional circumstances.

### Opening a PR

1. Push your branch to the remote:
```bash
git push origin session/week-03-fitting
```

2. Open a pull request on GitHub against `main`

3. Fill in the PR description using this template:

```markdown
## What this PR does
Brief description of what is being added or changed.

## Related issue
Closes #[issue number] (if applicable)

## Checklist
- [ ] My work follows the contribution guidelines
- [ ] I have tested any code I am submitting (it runs without errors)
- [ ] I have updated my learning log if this is exercise or session work
- [ ] My commit messages follow the convention
```

### Review requirements

- Every PR requires at least **one approving review** from another participant before it can be merged
- The PR author may not approve their own PR
- Reviewers should check: does the code run, are the notes clear, does the content match what was assigned
- Leave constructive comments — if something is wrong, explain why and suggest how to fix it
- The PR author is responsible for addressing review comments and merging once approved

### Merging

Use **Squash and Merge** for exercise and session PRs to keep the history clean. Use **Merge Commit** for weekly reports so the full history is preserved.

---

## 7. Issues

Issues are used to assign and track tasks, objectives, and problems. They are the primary coordination tool alongside weekly sessions.

### Issue types

| Label | Use |
|-------|-----|
| `task` | A concrete exercise or deliverable assigned to one or more participants |
| `objective` | A phase-level learning goal to be tracked over multiple sessions |
| `question` | A technical question raised during a session |
| `bug` | An error in existing code or documentation in the repository |
| `discussion` | An open topic for the group to weigh in on |

### Assigned issues

When an issue is assigned to you, you are responsible for it. This means:
- Acknowledging the assignment with a comment
- Updating the issue with progress as you work
- Linking your PR to the issue when you submit your solution
- Closing the issue once the PR is merged

Do not leave assigned issues unattended without a comment for more than one week.

---

## 8. Weekly Reports

Each week, a single consolidated report is committed to the `notes/` folder of this repository. This is the authoritative record of what the group covered, decided, and produced that week.

### Who writes it

The **session owner** for that week is responsible for writing the weekly report and submitting it as a PR to the main repository by **end of day on the Friday following the session**.

### Format

Reports live at:
```
notes/cohort-01/week-NN-YYYY-MM-DD.md
```

Template:

```markdown
# Week NN — [Topic]
**Date:** YYYY-MM-DD  
**Session Owner:** [Name]  
**Phase:** [Phase number and name]

## What We Covered
Concise summary of the session content.

## Exercises Assigned
- Task N.N — description — assigned to @username
- Task N.N — description — assigned to @username

## Issues Opened This Week
- #XX — brief description
- #XX — brief description

## Key Decisions or Notes
Any decisions made, clarifications given, or important points raised.

## Next Session
Date, topic, and session owner for the following week.
```

### Rules

- One report per week — not one per participant
- No drafts in the main repository — the PR review process is where the draft lives
- Reports must be factual and concise — they are a record, not an essay
- Once merged, a report is not edited. If a correction is needed, open a new PR with a note explaining the amendment

---

## 9. Learning Logs

Each participant maintains a personal learning log in the current phase repository. This is a private-to-you running document, updated at least once per week.

Location: `learning-logs/your-github-username.md`

The learning log is not graded and is not reviewed by others unless you choose to share it. Its purpose is to help you consolidate what you are learning and surface questions worth raising in sessions.

Suggested weekly entry structure:

```markdown
## Week NN — YYYY-MM-DD

**What I worked on this week:**
...

**What clicked:**
...

**What I am still confused about:**
...

**Questions for next session:**
...
```

A learning log that has not been updated for two or more consecutive weeks is treated as a signal of inactive participation.

---

## 10. Session Ownership

Each participant owns at least one session per quarter. Owning a session means:

- Preparing the material for that session (slides, code, exercises) and committing it to the phase repository **before** the session takes place
- Leading the session — presenting, demonstrating, and facilitating the hands-on portion
- Writing the weekly report for that week and submitting it as a PR by Friday
- Being the first point of contact for questions about that session's content in the days following

Session assignments are decided at the start of each quarter and recorded in `agenda/`. If you cannot fulfill your assigned session, notify the coordinator at least one week in advance.

---

## 11. Activity Requirements

Participation in FTOP is measured by observable GitHub activity, not by attendance alone.

| Requirement | Minimum |
|-------------|---------|
| Commits per phase | Consistent activity across all weeks of the phase |
| Pull requests opened | At least one per phase |
| Pull requests reviewed | At least two per month |
| Learning log updates | At least once per week |
| Sessions owned | At least one per quarter |
| Maximum consecutive inactive weeks | One — two or more triggers a check-in with the coordinator |

Participants who fall significantly behind on these requirements will have a direct conversation with the coordinator about whether continuing in the current cohort is appropriate. There is no penalty for stepping back — but there is an expectation of honesty about availability and commitment.

---

*FTOP — Tehran FCC Group*  
*For questions about these guidelines, open an issue with the label `discussion` in the main repository.*
