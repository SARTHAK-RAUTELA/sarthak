Question4-	What will be the output of the C program?

#include<stdio.h>
int main()
{
	float a = 5.0;
	printf ("Result is = %d ", (24 / 5) * a);
	return 0;
}	


Answer = 0

// correct code 

// To correctly print a float, we should use %f as the format specifier
#include<stdio.h>

int main() {
    float a = 5.0;
    printf("Result is = %f ", (24 / 5) * a);
    return 0;
}

