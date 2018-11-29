#include <stdio.h>
#include <string.h>
#include <ctype.h>

char*  foo(char str[], char* array1)
{
	int tmp = 0;
	

	for( int i = 0; i < strlen(str); i++)
	{ 
		
		if ((str[i] == '/') || (str[i] == '\\'))
		{
			tmp = i;
		}

		if (i == (strlen(str)-1))
		{
			for (int j = tmp + 1; j < (strlen(str)+1); j++)
			{
				(*(array1 + (j - (tmp + 1)))) = (str[j]);
			}
		}

	}
	return array1;
}



int main()
{
	char str[] = "/eff /fH/ello \\boy"; 
	
	for (int i = 0; i < strlen(str); ++i)
	{
		printf("%c",  str[i]);
	}

	printf("\n");
	
	char str1[100];

	char* str2 = foo(str, str1);

	for (int i = 0; i < strlen(str1); ++i)
	{
		printf("%c", *(str2 + i));
	}

	return 0;
}