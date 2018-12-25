#include <stdio.h>
#include <math.h>

void printAsBinary(unsigned int number)
{
    unsigned int mask;
    for (int i = sizeof(unsigned int) * 8 - 1; i >= 0; i--)
    {
        mask = (1 << i);
        if (number & mask)
            printf("1");
        else
            printf("0");
    }

}

unsigned int Shifr(unsigned int number)
{
    unsigned int bitnumber[32] = { 0 };
    unsigned int sum = 0;
    unsigned int mask;
    for (int i = sizeof(unsigned int) * 8 - 1; i >= 0; i--)
    {
        mask = (1 << i);
        if (number & mask)
            bitnumber[31 - i] = 1;
        else
            bitnumber[31 - i] = 0;
        printf("%u", bitnumber[31 - i]);
    }
    printf("\n");
    for (int i = 0; i <= 31; i = i + 2)
    {
        unsigned  int temp;
        temp = bitnumber[i];
        bitnumber[i] = bitnumber[i + 1];
        bitnumber[i + 1] = temp;
        printf("%u", bitnumber[i]);
        printf("%u", bitnumber[i + 1]);
    }
    unsigned int stepen = 1;

    for (unsigned int i = 31; i >= 1; i--)
    {
        sum = sum + (bitnumber[i] * stepen);
        stepen = stepen * 2;
    }
    printf("\n");
    return sum;
}


int main()
{
    unsigned int number = 14;
    unsigned int encrypt = Shifr(number);
    printf("%u", encrypt);
    return 0;
}
