// DOUBT : IF I PUT "n=0||1" , why it gives output as 1 is not a prime no. , 
// like why it only takes or prefer to take 1 as the value of n 

#include <stdio.h>

int main() {
    int n =2;

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