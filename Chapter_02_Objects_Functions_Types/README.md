# Chapter 02: Objects, Functions, and Types

This chapter establishes the core vocabulary and memory model of C. The central theme is understanding the difference between an **object** (storage for values) and its **identifier** (the name used to refer to it).

## Key Learnings

### 1. Variables, Scope, and Lifetime
* **Definition vs. Declaration:** A declaration introduces a name and type (e.g., `extern int x;`), while a definition allocates the actual storage (e.g., `int x = 5;`).
* **Scope:** The region of code where an identifier can be accessed. C has four types: **File**, **Block**, **Function Prototype**, and **Function** (for labels).
* **Shadowing:** Identifiers in inner scopes hide those in outer scopes. Use unique names to avoid confusion and bugs.
* **Lifetime:** The time period during execution when an object exists in memory.

### 2. Storage Durations
* **Automatic:** Local variables; created on block entry and destroyed on exit.
* **Static:** Exists for the entire program duration; initialized once before startup (file-scope or `static` local variables).
* **Allocated:** Persists from dynamic allocation (`malloc`) until explicit deallocation (`free`).
* **Thread:** Used in concurrent programming (not covered in detail here).

### 3. Alignment and Padding
* **Alignment:** Requirements for the starting memory address of an object (typically a power of two).
* **Padding:** Unused bytes inserted by the compiler to satisfy alignment for structure members.
* **_Alignas:** Keyword used to request stricter-than-default alignment for an object.

### 4. Object Types and Qualifiers
* **Boolean:** `_Bool` type (C99); use `<stdbool.h>` for `bool`, `true`, and `false`.
* **Derived Types:** Built from other types, including pointers, arrays, structures (`struct`), and unions.
* **Unions:** Allow different types to share the same memory; only one member is valid at a time.
* **Type Qualifiers:**
    * `const`: Object is not modifiable after initialization.
    * `volatile`: Value may change outside program control; prevents compiler optimization.
    * `restrict`: Informs the compiler that a pointer is the sole means of accessing an object to promote optimization.

### 5. Tags and Typedef
* **Tags:** Naming mechanism for `struct`, `union`, and `enum`. Tags are NOT types by themselves (e.g., use `struct s v;` instead of just `s v;`).
* **Typedef:** Creates an alias for an existing type; it does not create a new type.

---