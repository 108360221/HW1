#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1,num2,num3,max,min,adr;
	printf("Please input three integers:\n");
	scanf_s("%d%d%d",&num1, &num2, &num3);
	while ((num1 < num2) || (num2 < num3) || (num1 < num3))
	{
		if (num1 < num2)
		{
			adr = num1;
			num1 = num2;
			num2 = adr;
		}
		if (num2 < num3)
		{
			adr = num2;
			num2 = num3;
			num3 = adr;
		}
	}
	max = num1;
	min = num3;

	printf("largest number is %d \nsmallest number is %d\n",max, min);
	
	system("pause");
	
	return 0;
}