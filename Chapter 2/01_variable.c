#include <stdio.h>

int main()
{
    int i = 10; // declare and initialize "i"with 10
    int j = i;
    int a = 2,b = 3, c = 4, d = 5;
        int sum = a + b + c +d;
    //% is called format specifier
    //%d is for int , %f is for float and %c is for char
    printf("the value of i is %d and value of j is %d \n", i, j);
    printf("the value of a is %d and value of b is %d \n", a, b);
    printf("the value of c is %d and value of d is %d \n", c, d);
    printf("The sum of a, b, c and d is: %d\n", sum);
    // float b = a+3;
    // invalid : 'b' is alrdy used to declare an 'int'
    // float a = 1.1;
    // invalid : 'a' is alrdy used to declare an 'int'

    return 0;
}