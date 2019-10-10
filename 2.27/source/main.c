#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cnt1,cnt2;

	for (cnt1=1;cnt1<6;cnt1++) 
	{
		for (cnt2 = 5; cnt2 >cnt1; cnt2 -= 1)
		{

			printf(" ");
		}
		for (cnt2 = 0; cnt2 < cnt1; cnt2 += 1)
		{
			printf("*");
		}
		for (cnt2 = 1; cnt2 <  cnt1; cnt2 += 1)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");

	return 0;
}