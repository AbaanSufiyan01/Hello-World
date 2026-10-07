# Hello-World

Repository for Portfolio Building Activities (B25CS0311) at REVA University.

## Activity 1 & 2 – C/C++ Development Environment Setup
- Configured Visual Studio Code and GCC compiler via MinGW/MSYS2.
- Created, compiled, and executed `hello.c` in the integrated terminal.
- Verified output `Hello, World!` and established Git version control tracking.

## Activity 5 – Collaboration Log (GitLens & Live Share)
- **Pairing Partner:** Peer Collaborator (`@peer-dev`)
- **Mode:** Pair programming via VS Code Live Share.
- **Roles Swapped:**
  - **Driver:** Collaboratively drafted the modular `void greet(const char *name)` function.
  - **Navigator:** Guided boundary checks and tested invocation from `main()` using the shared terminal.
- **Built Together:** Added and verified the personalized `greet()` greeting function in `hello.c`.
- **Tooling Takeaway:** 
  - **VS Code Live Share:** Allowed seamless co-editing, shared terminal execution, and immediate feedback without merge conflicts.
  - **GitKraken GitLens:** Enabled real-time line-by-line blame inspection, surfacing commit timestamps, author identity, and granular change history directly within the editor.

## Reflection Questions
1. **How GitLens' blame view helped:**
   GitLens surfaces line-level author attribution directly inline, eliminating the need to manually hunt through `git log`. It reveals exactly who authored each block, the commit timestamp, and the associated commit message, which makes code review and root-cause debugging immediate.
2. **Advantages and limitations of Live Share:**
   - *Advantage:* Synchronized workspace state and shared terminals allow instant remote collaboration without git synchronization overhead.
   - *Limitation:* Highly reliant on network latency and lacks in-person physical cues or whiteboarding spontaneity.
3. **Value of collaborative commits for employers:**
   Professional software engineering is fundamentally team-oriented. Demonstrating multi-author commit histories, clear messages, and collaborative tooling proves that a candidate knows how to integrate into production development pipelines.