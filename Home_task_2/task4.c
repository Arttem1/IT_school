#include <stdio.h>

int main()
{
	int a = 9;
	int b = 0;
	int p = 0;
	printf("Enter number a figure\n");
	printf("1.Cross\n");
	printf("2.Hollow diamond\n");
	printf("3.Filled diamond\n");
	b=(int)getchar()-48;
	switch (b)
	{
	case 1:
	{
		for (int i = 0; i < ((a - 1) / 2); i++)
		{
			for (int q = 0; q < i; q++)
				printf(" ");
			printf("*");

			for (int m = 0; m < (a - 2 - p); m++)
				printf(" ");
			printf("*\n");
			p = p + 2;
		}
		if ((a - (a / 2) * 2) == 1)
		{
			for (int i = 0; i < ((a - 1) / 2); i++)
				printf(" ");
			printf("*\n");
		}
		else
		{
			for (int e = 0; e < 2; e++)
			{
				for (int i = 0; i < ((a - 1) / 2); i++)
					printf(" ");
				printf("**\n");
			}
		}
		for (int i = ((a - 1) / 2); i > 0; i--)
		{
			for (int q = 0; q < i-1; q++)
				printf(" ");
			printf("*");

			for (int m = (a - 2 - p); m > -2; m--)
				printf(" ");
			printf("*\n");
			p = p - 2;
		}
		break;
	}
	case 2:
	{
		int p = 0;
		for (int i = 0; i < ((a - 1) / 2); i++)
			printf(" ");
		printf("*\n");
		for (int i = ((a - 1) / 2); i > 0; i--)
		{
			for (int q = 0; q < i - 1; q++)
				printf(" ");
			printf("*");

			for (int m = 0; m < 1+p; m++)
				printf(" ");
			printf("*\n");
			p = p + 2;
		}
		p;
		if ((a - (a / 2) * 2) == 0)
		{
			printf("*");
			for (int m = 0; m < p-1; m++)
				printf(" ");
			printf("*\n");
		}
		for (int i = 0; i < ((a - 1) / 2)-1; i++)
		{
			for (int q = 0; q < i + 1; q++)
				printf(" ");
			printf("*");

			for (int m = 0; m <p-3; m++)
				printf(" ");
			printf("*\n");
			p = p - 2;
		}
		for (int i = 0; i < ((a - 1) / 2); i++)
			printf(" ");
		printf("*\n");
		break;
	}
	case 3:
	{
		int p = 0;
		for (int i = 0; i < ((a - 1) / 2); i++)
			printf(" ");
		printf("*\n");
		for (int i = ((a - 1) / 2); i > 0; i--)
		{
			for (int q = 0; q < i - 1; q++)
				printf(" ");
			for (int m = 0; m < 2 + p; m++)
				printf("*");
			printf("*\n");
			p = p + 2;
		}
		p;
		if ((a - (a / 2) * 2) == 0)
		{
			for (int m = 0; m < p; m++)
				printf("*");
			printf("*\n");
		}
		for (int i = 0; i < ((a - 1) / 2) - 1; i++)
		{
			for (int q = 0; q < i + 1; q++)
				printf(" ");
			for (int m = 0; m < p - 2; m++)
				printf("*");
			printf("*\n");
			p = p - 2;
		}
		for (int i = 0; i < ((a - 1) / 2); i++)
			printf(" ");
		printf("*\n");
		break;
	}
	}
}