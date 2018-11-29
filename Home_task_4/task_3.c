#include <stdio.h>
#include <string.h>

size_t mystrlen(const char* thepointer1)
{
	size_t alenght = 0;
	while ((*(thepointer1 + alenght)) != '\0')
		alenght = alenght + 1;
	return alenght;
}


int mystrcmp(const char* thepointer1, const char* thepointer2)
	{
		int alenght = 0;
		
		while (((*(thepointer1 + alenght)) != '\0') && ((*(thepointer2 + alenght)) != '\0'))
		{
			if ((*(thepointer1 + alenght)) > (*(thepointer2 + alenght)))
			{
				return 1;
			}
			else if ((*(thepointer1 + alenght)) < (*(thepointer2 + alenght)))
			{
				return -1;
			}

			alenght++;
		}
		return 0;
	}


char* mystrchr(const char* thepointer1, int thesymbol)
{
	int alenght = 0;

	while (*(thepointer1 + alenght) != '\0')
	{
		if (((int)(*(thepointer1 + alenght))) == thesymbol)
		{
			return thepointer1 + alenght;
		}
		else
			alenght++;
	}
	return NULL;
}

char* mystrcpy(char* thepointer3, const char* thepointer1)
{
	int alenght = 0;
	while ((*(thepointer1 + alenght) != '\0') && (*(thepointer3 + alenght) != '\0'))
	{
		*(thepointer3 + alenght) = *(thepointer1 + alenght);
		alenght++;
	}

	if (*(thepointer3 + alenght) != '\0')
		*(thepointer3 + alenght + 1) = '\0';

	return thepointer3 ;
}


char* mystrcat(char* thepointer4, const char* thepointer1)
{
}




int main()
{
	char array1[] ="666166";
	char array2[] = "66666";
	char array3[] = "         4";
	const char* pointer1 = 0;
	const char* pointer2 = 0;


	pointer1 = array1;
	pointer2 = array2;


	size_t lenght = mystrlen(pointer1);
	printf("%u", lenght);
	printf("\n");

	int compare = 0;

	compare = mystrcmp(pointer1, pointer2);
	printf("%i", compare);
	printf("\n");



	char* position = mystrchr(pointer1, '1');

	printf("%p", position);

	printf("\n");


	char* pointer3 = array3;

	pointer3 = mystrcpy(pointer3, pointer1);

	for(int i = 0 ; i<= strlen(array3) ; i++)
		printf("%c", *(pointer3 + i));

	printf("\n");


	

}