#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

void main(int argc, char* argv[])
{
	int i = 0;
	int flag = 0;
	int count = 0;
	int counttab = 0;
	FILE *Input = NULL;
	FILE *Output = NULL;

	char* symbol = (char*)malloc(sizeof(char) * 1500000);
	Input = fopen(argv[1], "r");
	if (Input == NULL)
	{
		fprintf(stderr, "File %s not openned", argv[1]);
	}
	
	Output = fopen(argv[2], "w");
	if (Output == NULL)
	{
		fprintf(stderr, "File %s not openned", argv[2]);
	}
	
	while (!feof(Input))
	{
		fscanf(Input, "%c", &symbol[i]);
		if (symbol[i] == '\t')
		{
			i--;
			count--;
		}
		i++;
		count++;
	}
	count--;
	for (int m = 0; m < count; m++)
	{
		if (symbol[m] == '}')
		{
			counttab--;
		}
		for (int e = 0; e < counttab; e++)
		{
			fprintf(Output,"%c", '\t');
		}
		fprintf(Output, "%c", symbol[m]);
		if (symbol[m] == '{')
		{
			counttab++;
		}	
		
	}
}