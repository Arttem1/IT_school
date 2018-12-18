#include <stdio.h>

typedef void(*func_t)(int, char);

void Cross(int a, char symbol)
{
	int p = 0;
	for (int i = 0; i < ((a - 1) / 2); i++)
	{
		for (int j = 0; j < i; j++)
			printf(" ");
		printf("%c", symbol);

		for (int k = 0; k < (a - 2 - p); k++)
			printf(" ");
		printf("%c", symbol);
		printf("\n");
		p = p + 2;
	}
	if (a % 2 == 1)
	{
		for (int i = 0; i < ((a - 1) / 2); i++)
			printf(" ");
		printf("%c", symbol);
		printf("\n");
	}
	else
	{
		for (int i = 0; i < 2; i++)
		{
			for (int k = 0; k < ((a - 1) / 2); k++)
				printf(" ");
			printf("%c", symbol);
			printf("%c", symbol);
			printf("\n");
		}
	}
	for (int i = ((a - 1) / 2); i > 0; i--)
	{
		for (int j = 0; j < i - 1; j++)
			printf(" ");
		printf("%c", symbol);

		for (int k = (a - 2 - p); k > -2; k--)
			printf(" ");
		printf("%c", symbol);
		printf("\n");
		p = p - 2;
	}

}

void HollowDiamond(int a, char symbol)
{
	int p = 0;
	for (int i = 0; i < ((a - 1) / 2); i++)
		printf(" ");
	printf("%c", symbol);
	printf("\n");
	for (int i = ((a - 1) / 2); i > 0; i--)
	{
		for (int j = 0; j < i - 1; j++)
			printf(" ");
		printf("%c", symbol);

		for (int k = 0; k < 1 + p; k++)
			printf(" ");
		printf("%c", symbol);
		printf("\n");
		p = p + 2;
	}
	p;
	if (a % 2 == 0)
	{
		printf("%c", symbol);
		for (int m = 0; m < p - 1; m++)
			printf(" ");
		printf("%c", symbol);
		printf("\n");
	}
	for (int i = 0; i < ((a - 1) / 2) - 1; i++)
	{
		for (int j = 0; j < i + 1; j++)
			printf(" ");
		printf("%c", symbol);

		for (int k = 0; k < p - 3; k++)
			printf(" ");
		printf("%c", symbol);
		printf("\n");
		p = p - 2;
	}
	for (int i = 0; i < ((a - 1) / 2); i++)
		printf(" ");
	printf("%c", symbol);
	printf("\n");
}

void FilledDiamond(int a, char symbol)
{
	int p = 0;
	for (int i = 0; i < ((a - 1) / 2); i++)
		printf(" ");
	printf("%c", symbol);
	printf("\n");
	for (int i = ((a - 1) / 2); i > 0; i--)
	{
		for (int j = 0; j < i - 1; j++)
			printf(" ");
		for (int k = 0; k < 2 + p; k++)
			printf("%c", symbol);
		printf("%c", symbol);
		printf("\n");
		p = p + 2;
	}
	p;
	if (a % 2 == 0)
	{
		for (int i = 0; i < p; i++)
			printf("%c", symbol);
		printf("%c", symbol);
		printf("\n");
	}
	for (int i = 0; i < ((a - 1) / 2) - 1; i++)
	{
		for (int j = 0; j < i + 1; j++)
			printf(" ");
		for (int k = 0; k < p - 2; k++)
			printf("%c", symbol);
		printf("%c", symbol);
		printf("\n");
		p = p - 2;
	}
	for (int i = 0; i < ((a - 1) / 2); i++)
		printf(" ");
	printf("%c", symbol);
	printf("\n");
}


int main()
{

	int size = 0;
	int type = 0;

	char symbol = '0';

	printf("Enter size a figure\n");
	scanf_s("%d", &size);
	getchar();

	printf("Enter symbol\n");
	symbol = getchar();
	getchar();

	func_t array[] = { Cross ,HollowDiamond,FilledDiamond };


	printf("Enter number a figure\n");
	printf("0.Cross\n");
	printf("1.Hollow diamond\n");
	printf("2.Filled diamond\n");

	scanf_s("%d", &type);
	getchar();


	array[type](size, symbol);
	

}