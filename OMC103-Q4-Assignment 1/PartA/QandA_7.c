Question7 -	What will be the output of the following C Program?

#include<stdio.h>
int main()
{
	printf("%d",3 * 2--);
}	


Answer = Compiler Error

// Reason
In C, modifying a variable and using its value within the same expression without a sequence point leads to undefined behavior.
