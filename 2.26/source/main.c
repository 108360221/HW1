#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2;
	printf("please input two integers :\n");
	scanf_s("%d%d",&num1,&num2);

	if (num1 % num2 == 0)
	{
		printf("%d is a multiple pf %d",num1,num2);
	}
	else
	{
		printf("%d isn't a multiple pf %d", num1,num2);
	}
	system("pause");

	return 0;
}