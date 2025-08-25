// implement 10 using other types of loops
// write a program to check whether a given number is prime or not using a loop

/* using "for" loop*/

// #include <stdio.h>

// int main()
// {
//   int n = 10;
//   if (n == 0 || n == 1)
//   {
//     printf("%d is not prime", n);
//     return 0;
//   }

//   for (int i = 2; i < n; i++)
//   {
//     if (n % i == 0)
//     {
//       printf("%d is a not a prime no.\n", n);
//       return 0;
//     }
//   }
//   printf("%d is a prime no.\n", n);

//   return 0;
// }

/* using while loop*/

// #include <stdio.h>

// int main()
// {
//   int n = 5;
//   int i = 2;
//   if (n == 0 || n == 1)
//   {
//     printf("%d is not prime", n);
//     return 0;
//   }
//   while (i < n)
//   {
//     if (n % i == 0)
//     {
//       printf("%d is a not a prime no.\n", n);
//       return 0;
//     }
//     i++;
//   }
//   printf("%d is a prime no.\n", n);

//   return 0;
// }

/* Using "do-while" loop*/

#include <stdio.h>

int main() {
    int n =15;
      int i=2;
      if (n==0||n==1)
      {
         printf("%d is not prime",n);
          return 0;
      }
     do
     {
      if (n%i==0)
        {
           printf("%d is a not a prime no.\n",n);
           return 0;
        }
        i++;
     } while (i<n);

            printf("%d is a prime no.\n",n);

     return 0;
}