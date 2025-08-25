#include <stdio.h>

int main()
{
     int age = 15;

     if (age > 10)
     {
          printf("we  are inside if\n");
          printf("your age is greater than 10\n\n");
     }
    
     if (age%5==0)
     {
          printf("we  are inside another if\n");
          printf("your age is divisible by 5");
     }
    

     //      int a=0 , b=6;
     //     printf("the value of a and b is %d\n", a&&b);
     //      printf("the value of a or b is %d\n", a||b);
     //      printf("the value of not a is %d\n", !a);

     return 0;
}
