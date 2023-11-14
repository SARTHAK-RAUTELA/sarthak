
Question1- What is the output of the following program?

int main()
{
	int a=10,b=20,c=30;
	printf("%d %d %d");
	return 0;
}







Answer =  (a) Garbage Value

// The correct way to use printf would be:

#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    printf("%d %d %d", a, b, c);
    return 0;
}

