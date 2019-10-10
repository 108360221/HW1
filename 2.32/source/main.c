#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float height, weight,BMI;

	printf("Please input your  weight(kg):");
	scanf_s("%f" , &weight);
	printf("\nPlease input your height(cm) :");
	scanf_s("%f" , &height);

	BMI = weight / (height*0.01* height * 0.01);

	printf("Your BMI is %f\nResult:", BMI);
	if (BMI<18.5)
	{
		printf("Underweight");
	}
	if (BMI > 18.5 && BMI<24.9)
	{
		printf("Normal");
	}
	if (BMI > 25.0 && BMI < 29.9)
	{
		printf("Overweight");
	}
	if (BMI > 30.0)
	{
		printf("Obese");
	}

	printf("\n");
	system("pause");

	return 0;
}