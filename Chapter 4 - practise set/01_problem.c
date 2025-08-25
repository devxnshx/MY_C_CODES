#include <stdio.h>

int main() {
    //PRINT MULTIPLICATION TABLE OF GIVEN NUMBER "N"
     int n;
     scanf("%d",&n);
     for (int i = 1; i<=10; i++)
     {
        printf("%d X %d = %d\n",n,i,n*i);
     }
     

     return 0;
}