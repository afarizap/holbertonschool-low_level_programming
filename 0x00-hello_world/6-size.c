#include<stdio.h>
int main(void)
{
        char charType; 
	int intType;
	longinit initType;
	longlonginit initType;
        float floatType;
	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
	
	return (0);
}
