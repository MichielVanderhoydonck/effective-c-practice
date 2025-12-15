# The Three Kinds of Behavior

The C Standard defines three kinds of unpredictable behavior we must be aware of:

- **Implementation-Defined Behavior:** The behavior is documented by the compiler/platform developer, but it can vary between different systems.  
**Example:** The number of bits in a char is at least 8, but the exact number on any system is implementation-defined.

- **Unspecified Behavior:** The standard explicitly gives the implementation (the compiler) two or more options, and the compiler does not have to document which one it chooses. It may even change from one execution to the next.  
**Example:** The order in which function arguments are evaluated.

- **Undefined Behavior (UB):** The worst kind! If our code hits UB, the C Standard places no requirements on what happens next. The result could be a crash, corrupted data, or seemingly correct behavior that breaks later in unpredictable ways. This is the source of many C vulnerabilities and bugs.  
**Example:** Signed integer overflow (adding two positive ints resulting in a negative number), or accessing memory after it has been freed.

We must strive to eliminate all undefined behavior from our code. Compilers often exploit UB to perform aggressive optimizations, meaning the code that runs might not even resemble the code we wrote!