#include <stdio.h>
#include <math.h>
int main()
{
	double Number;
	double  Div;
	Number = 0;
	printf("This program identifies whether a number is prime.\n");
	printf("Please give me a number: ");
	
	scanf("%lf", &Number);  //lf means large float and it is being used because Number is Double
	if (Number == 1.0)
	{
		printf("This number is not prime.\n");
		return 0;
	}
	if (Number == 2.0)
	{
		printf("This number is prime.\n");
		return 0;
	}
	if (Number < 2)
	{
		printf("Please give me a larger number than 2.\n");
		return 0;
	}
	Div = 2;
	while (Div <= sqrt(Number))
	{
		if (fmod(Number,Div) == 0)
		{
			printf("This number is NOT prime.\n");
			return 0;
		}
		Div++;
	}
	printf("This number is prime.\n");




	return 0;
}