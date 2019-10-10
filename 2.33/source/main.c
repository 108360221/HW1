#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d, e,total;
	printf("Input your total miles driven per day:");
	scanf_s("%d", &a); 
	printf("\nInput your cost per gallon of gasoline:");
	scanf_s("%d", &b);
	printf("\nInput your average miles per gallon:");
	scanf_s("%d", &c);
	printf("\nInput your parking fees per day:");
	scanf_s("%d", &d);
	printf("\nInput your tolls per day:");
	scanf_s("%d", &e);

	total = a/c*b+d+e;

	printf("\nYour cost per day of driving to work:%d",total);

	system("pause");

	return 0;
}