#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* transfiguration(char str[])
{
	int chislo = strlen(str);
	char* str1 = str;
	int flag = 0;
	int tmp = 0;
	for (int i = 0; i < chislo; ++i)
	{
		if ((isspace(str[i])) && ((i < (chislo - flag))))
		{
			tmp++;
			if (tmp >= 2)
				flag++;
			str[i] = ' ';
		}
		else
		{ 
			for(int k = 0; k < tmp - 1; k++)
			{
				for (int j = i; j < (chislo); j++)
				{
					str[j-1] = str[j];
				}
				if (!(str[chislo - 1] == ' '))
				{
					str[chislo - 1] = ' ';
				}
				i--;	
			}
			tmp = 0;
		}
	}
	return str1;
}
int main()
{
	char str[] = "How  much \t \n \n is  the\t\t\t\tfish";

	char* str2 = transfiguration(str);

	for (int i = 0; i < (sizeof(str) / sizeof(char)); ++i)
	{
		printf("%c", *(str2+i));
	}
	return 0;
}
