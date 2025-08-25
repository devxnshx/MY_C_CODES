// Explain step by step evaluation of 3*x/y-z+k , x=2, y=3, z=3,k=1;
#include <stdio.h>

int main()
{
    int x = 2, y = 3, z = 3, k = 1;
    float result = 3 * x / y - z + k;
    // step 1 = 3*x = 3 * 2 = 6
    // step 2 = 6/y = 6 / 3 = 2
    // step 3 = 2-z = 2 - 3 = -1
    // step = 4 -1+k = -1 + 1 = 0
    // The final result is 0.0  /*as we took result as float*/);
     printf("The value of e is %f", result);
    return 0;
}
