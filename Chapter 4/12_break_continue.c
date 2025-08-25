#include <stdio.h>

int main()
{
     for (int i = 0; i <= 15; i++)
     {
          if (i == 4)
          {
           //     break; //exit the loop now!
               continue; // Skip this iteration now
          }
          printf("the value of i is %d\n", i);
     }
     printf("FOR LOOP is done!!");
     return 0;
}