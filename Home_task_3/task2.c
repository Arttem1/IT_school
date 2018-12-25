#include <stdio.h>

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



unsigned int ShiftBinary(unsigned int number, unsigned int position)
{
  unsigned int mask;
  for ( unsigned int i = 1; i <= position ; i++ )
  {
      mask = 1;
      if (mask & number)
      {
          mask = (mask << 31);
          number = (number >> 1);
          number = (number | mask );
      }
      else
          number = (number >> 1);
  }
    return number;
}



int main()
{

    unsigned int expnumber;
    unsigned int deistvnumber =  10;
    unsigned int n = 3;
    expnumber = ShiftBinary(deistvnumber, n );

    printAsBinary(expnumber);

    return 0;
}
