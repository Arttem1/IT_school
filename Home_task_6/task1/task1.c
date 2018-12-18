#include <stdio.h>
#include <math.h>
#include <stdlib.h>


typedef struct User
{
	int id;
	char nickname[51];
	int karma;
} User;

int* addKarma(User* user, int amount)
{
	static int callCnt = 0;
	callCnt++;
	user->karma += amount;
	return &callCnt;
}

int CompKarma(const void* pa, const void* pb)
{
	if (((const User*)pa)->karma > ((const User*)pb)->karma)
		return 1;
	else
		if (((const User*)pa)->karma > ((const User*)pb)->karma)
			return -1;
		else
			return 0;
}

int CompNickName(const void* pa, const void* pb)
{
	int i = 0;
	while ((((const User*)pa)->nickname[i] != '\0') || 
		   (((const User*)pb)->nickname[i] != '\0'))

	{
		if (((const User*)pa)->nickname[i] > ((const User*)pb)->nickname[i])
			return 1;
		else
			if (((const User*)pa)->nickname[i] < ((const User*)pb)->nickname[i])
				return -1;
			else
				i++;
	}
	return 0;
}

int main()
{
	User user1 = { 15, "nicky", 0 };
	User user2 = { 18, "brain1", 0 };
	User user3 = { 22, "Aa", 0 };

	printf("%p\n", addKarma(&user1, 1));
	printf("%p\n", addKarma(&user1, 1));
	printf("%p\n", addKarma(&user2, 2));
	printf("%p\n", addKarma(&user1, 1));
	printf("%p\n", addKarma(&user2, 2));


	User array[3] = { user1, user2, user3 };

	
	qsort(&array[0], 3, sizeof(User), CompKarma);
		
	
	for (int i = 0; i < 3; i++)
	{
		printf("%i", array[i].id);
		printf("\t");
		printf("%i", array[i].karma);
		printf("\n");
	}

	qsort(&array[0], 3, sizeof(User), CompNickName);

	int j = 0;


	for (int i = 0; i < 3; i++)
	{
		printf("%i", array[i].id);
		printf("\t");
		while (array[i].nickname[j] != '\0')
		{
			printf("%c", array[i].nickname[j]);
			j++;
		}
		j = 0;
		printf("\n");
	}
}
