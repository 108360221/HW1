#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cnt,num1,num2,num3;
	printf("number\tsquare\tcube\n");
	for (cnt=0;cnt<11;cnt++)
	{
		num1 = cnt;
		num2 = num1 * num1;
		num3 = num1 * num1 * num1;
		printf("%d\t%d\t%d\n",num1, num2, num3);
	}

	system("pause");

	return 0;
}