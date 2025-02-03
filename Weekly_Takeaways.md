**Week 1**

To understand, where and why Future is used

If incorrectness logic can be used instead to remove unknown paths (concrete paths only in post and pre condition) → reduce false positives

Where induction can be chabnged in source code

Why are they relying on temporal logic?

**Week 2**

Incorrectness logic - how are likely bug paths found? (start from error post condition and see if pre possible)

Outcome logic - read if there is time

Loop invariant paper (temporal logic/future stuff mentioned) - remind him to send paper

Can we convert future to incorrectness logic?

Instead of ignoring latent bugs like ProveNFix does, report how it can be repaired later → Repair condition → Can be used to synthesise patches later when it does occur

Entailment → ISL → use left to imply right hand side → read ISL paper

Biabduction → How it works in Separation vs ISL → Frames vs Missing → can apply to ProveNFix?

Talk to Prof. Earl about LLM thing, good idea? Concretise approach first for ProveNFix

**Week 3**

- Does infer already use under-approximation in ProveNFix
    - Run infer with pulse on some examples
    - See if they match with ProveNFix fixes (taking into consideration Futures)
    - See in code of Infer in ProveNFix for any evidence of Incorrectness being used
- Can sync\_compute\_struct\_post be changed
- Inclusion checking
    - Effect with footprint inclusion
- program repair → modify to generate repair condition?
- Retrieve specification → cFrontendML → changed to get more specs?
- Create flowchart of working of tempfix
- Run Infer on example program (maybe one that is used in ProveNfix artefacts)
    - What is Future doing?
    - Understand how it finds bugs (under vs over approximation)
- Repair condition → change cFrontend program repair?
    - Just change Future logic to get repair condition?

**Week 4**

- Email authors to ask why they use -pulse, and if it effects the repair, (are they using just the frontend of infer or the backend as well) Why is the artefact not consistent with the paper. Paper mentions 17 annotated specs, but in the artefacts there are much more (30 or so), what is the purpose of that *
- Pen and paper explanation for how they find bugs and repair, and how future condition. *
- Compile tempfix manually
- Run experiment to see if changing -pulse changes output (change source code)
- Change source code to understand if single files can be used instead of whole projects to generate repairs (makes it easier for analysis - and understand how Futures work)
- Are Futures pre-annotated or are they generated?

**Week 5**

- Fix slide 38 → comments are distracting
- Find a way to print inferred specs from tempFix, analysis output only shows LHS and RHS for now —> seems like some things can be uncommented?
- Slides 40-41 assumes whatever Song said was correct, make changes in the next meeting → confirm if these are correct claims by maybe running some experiments
- In the pre-final slide, change it to integrate the proveNfix extended results to infer rather than ProveNFix
- Read Separation Logic

**Week 6**

- Finish literature review: Hoare Style Logic, Automatic program repair, Incorrectness Logic
- How does infer work internally → how will the implementation of repair condition would work → Manifestly buggy paths
- What code changes would have to be made? (repair function, synthesis function, etc)
- Pen and paper working model?
- Snippets of code with their explanation in the context of how it works currently vs what could be changed in them to have incorrectness logic and finding buggy paths to generate repair conditions
- Decide which path to take the thesis, narrow down scope

**Week 7**

- Example of future condition entailment check with simple program execution
- Find out which bugs the tool can detect and which it can repair
- Generating repair conditions → how could this work in the context of Infer instead of ProveNFix (the slides currently have an implementation in the context of ProveNFix)
