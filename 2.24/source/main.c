#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("please input a integer:\n");
	scanf_s("%d", &num);

	if (num % 2 == 0)
	{
		printf("%d is even",num);
	}
	else
	{
		printf("%d is odd", num);
	}
	system("pause");

	return 0;
}