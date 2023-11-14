Question3 -	Illustrate the nested if-else statement with an example.	


Answer =

A nested if-else statement is a control flow structure in programming where an inner set of if-else statements is placed inside an outer set. 
This arrangement allows for more complex decision-making by evaluating multiple conditions sequentially. 
The execution of the inner if-else statements depends on the outcome of the outer conditional statement.

// Example 

#include<stdio.h>

int main() {
    int age = 25;
    int salary = 50000;

    if (age >= 18) {
        if (salary >= 30000) {
            printf("You are eligible for a loan.\n");
        } else {
            printf("Sorry, your salary is below the required threshold for a loan.\n");
        }
    } else {
        printf("Sorry, you must be at least 18 years old to apply for a loan.\n");
    }

    return 0;
}
