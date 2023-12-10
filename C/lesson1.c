/* 
C is a general-purpose, procedural computer programming language supporting structured programming, 
lexical variable scope, and recursion, with a static type system. By design, C provides constructs that 
map efficiently to typical machine instructions. It has found lasting use in applications previously 
coded in assembly language. Such applications include operating systems and various application software 
for computer architectures that range from supercomputers to PLCs and embedded systems.

# Like all programming languages, they either have to have a list of components that allow it 
to work accross different systems, this is called a Programming Environment and is mainly composed of:
        - A text editor, to write the code.
        - A compiler or interpreter to translate the code into machine readable language.
            - A linker, to link the code with the libraries.
            - A debugger, to find errors in the code.
            - A builder, to build the code into an executable file.

# Ok, breakdown of the course
    - Lesson 1: Introduction to C : Input and Output
    - Lesson 2: Variables and Data Types
    - Lesson 3: Operators
    - Lesson 4: Input and Output
    - Lesson 5: Control Flow
    - Lesson 6: Functions
    - Lesson 7: Arrays
    - Lesson 8: Pointers
    - Lesson 9: Strings
    - Lesson 10: Structures
    - Lesson 11: Unions
    - Lesson 12: Bit Fields
    - Lesson 13: Typedef
    - Lesson 14: Input and Output
    - Lesson 15: File Input and Output
    - Lesson 16: Preprocessors
    - Lesson 17: Header Files
    - Lesson 18: Type Casting
    - Lesson 19: Error Handling
    - Lesson 20: Recursion
    - Lesson 21: Variable Arguments
    - Lesson 22: Memory Management
    - Lesson 23: Command Line Arguments
    - Lesson 24: Basic Data Structures
    - Lesson 25: Linked Lists
    - Lesson 26: Stacks
    - Lesson 27: Queues
    - Lesson 28: Trees
    - Lesson 29: Graphs
    - Lesson 30: Searching and Sorting
    - Lesson 31: Hashing
    - Lesson 32: Algorithms
    - Lesson 33: Data Structures and Algorithms
    - Lesson 34: Dynamic Programming
    - Lesson 35: Object Oriented Programming
    - Lesson 36: Overloading
    - Lesson 37: Encapsulation
    - Lesson 38: Inheritance
    - Lesson 39: Polymorphism
    - Lesson 40: Abstraction
    - Lesson 41: Interfaces
    - Lesson 42: Namespaces
    - Lesson 43: Exception Handling
    - Lesson 44: Templates
    - Lesson 45: Standard Template Library
    - Lesson 46: Input and Output
    - Lesson 47: File Input and Output
    - Lesson 48: Preprocessors
    - Lesson 49: Header Files
    - Lesson 50: Type Casting
    - Lesson 51: Error Handling
    - Lesson 52: Recursion
    - Lesson 53: Variable Arguments
    - Lesson 54: Memory Management
    - Lesson 55: Command Line Arguments
*/
#include <stdio.h>
int a = 12; 
int main() {
    int b = 13;
    printf("Hello World! I'm using C\n");
    printf("The global variable \" a \" is %d and\nthe local variable \" b \" is %d %d\n", a, b);
    return 0;
}
