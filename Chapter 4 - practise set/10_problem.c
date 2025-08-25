// write a program to check whether a given number is prime or not using a loop

// #include <stdio.h>

// int main()
// {
//     int n = 10;
//     int not_prime = 0;

//     if (n == 0 || n == 1)
//     {
//         not_prime = 1;
//     }

//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             not_prime = 1;
//         }
//     }
//     if (not_prime)
//     {
//         printf("%d is a not a prime no.\n", n);
//     }
//     else
//     {
//         printf("%d is a prime no.\n", n);
//     }
//     return 0;
// }

// shorter code (prime removed and added return  function to end the code there itself)

#include <stdio.h>

int main() {
    int n =10;

    if (n==0||n==1)
    {
        printf("%d is not prime",n);
        return 0;
    }

    for ( int i=2; i<n; i++)
    {
        if (n%i==0)
        {
           printf("%d is a not a prime no.\n",n);
           return 0;
        }
    }
            printf("%d is a prime no.\n",n);

     return 0;
}