#include <stdio.h>
int main()
{
	printf("Celsius degree  Farengeit degree  Reaumur degree\n");
	for (float Celsius = -5; Celsius <= 5; Celsius = Celsius + 1.25)
	{
		printf("%f         %f        %f\n", Celsius, Celsius*9/5, Celsius*4/5);

	}
	return 0;
}