Question5-	What is the need for user-defined functions? Explain with an example.	


Answer = 

User-defined functions in programming serve several purposes, including code modularization, reusability, and improving the overall structure and readability of the code. Here are some reasons for using user-defined functions:

1. **Modularization and Readability:**
   - Breaking down a program into smaller, manageable functions makes the code modular. Each function can represent a specific task or operation, making the overall structure of the program more organized and easier to understand.

2. **Reusability:**
   - Once a function is defined, it can be reused multiple times in the program. This promotes code reuse and reduces redundancy. If a similar task needs to be performed at different parts of the program, you can call the same function rather than duplicating the code.

3. **Abstraction:**
   - Functions allow you to abstract the details of a particular task. Users of the function only need to know what the function does, not how it is implemented. This abstraction simplifies the overall program logic.

4. **Easier Debugging and Maintenance:**
   - With functions, debugging and maintenance become more manageable. If there is an issue, you can focus on a specific function rather than the entire program. This makes it easier to identify and fix problems.

example in C:


#include<stdio.h>

// Function to calculate the square of a number
int square(int num) {
    return num * num;
}

int main() {
    int x = 5;
    
    // Calling the user-defined function
    int result = square(x);

    printf("The square of %d is %d\n", x, result);

    return 0;
}

