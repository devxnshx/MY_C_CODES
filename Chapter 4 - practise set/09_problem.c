// repeat problem 8 using while loop 

#include <stdio.h>

int main() {
    int product = 1;
    int n=4;
    int i=1;
    while (i<=n)
    {
        product *= i;
        i++;
    }
    printf("the value of factorial asked is %d",product);

     return 0;
}