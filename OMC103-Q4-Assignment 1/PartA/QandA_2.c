2	What is the output of the following program?
#include<stdio.h>
int main()
{
	void *ptr;
	int  num = 10;
	ptr = &num;
	printf("%d", ptr);
	return 0;
}	




Answer = (b) Address Value

// correct code will be

#include<stdio.h>

int main() {
    void *ptr;
    int num = 10;
    ptr = &num;
    printf("%p", ptr);
    return 0;
}
