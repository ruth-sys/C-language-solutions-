#include <stdio.h>
#include <stdlib.h>

int power (int, int);
int main ()
{
    int base, expo, num, results;
    printf("Please enter the base number");
    scanf("%d",&base);
    printf("Please Enter the Exponential number ");
    scanf("%d",&expo);
    results = power(base, expo);
    printf("The result of %d raised to the power of %d is %d", base, expo, results);
    printf("\n");
    system("pause");
    return 0;
}

int power(int base, int expo)
{
	int i, product = 1;
	for (i = 0; i < expo; i++)
		product= product * base;

	return product;
}
