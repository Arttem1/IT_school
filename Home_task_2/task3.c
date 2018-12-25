#include<stdio.h>
int main()
{
	int count = 0;
	int number = 0;
	printf("Enter number\n");
	scanf_s("%d", &number);
	while (number != 0)
	{
		number = number / 10;
		count++;
	}
	printf("Size a number %i", count);
	return 0;
}