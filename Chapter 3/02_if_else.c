//"if" always print only true values
//"else" always print only false values

//"1" is cooncedered as true value
//"0" is cooncedered as false value

#include <stdio.h>

int main()
 {
      int age = 5;

     if (age > 10)
     {
          printf("we  are inside if\n");
          printf("your age is greater than 10\n");
     }
     else {
        printf("your age is not greater than 10");
     }
           
     return 0;
}