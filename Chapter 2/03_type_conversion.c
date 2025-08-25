#include <stdio.h>

int main()
{
    int a = 9;
    // float a = 9;
    int b = 2;
    float c = a / b;
    // a/b (int/int ) will give an int value only
    // but as 'c'= float , so it will give result be like 4.00000
    printf("\n\nthe value of a/b is %f\n", c);

    int d = 6.7;
    // we took 'd' as 'int' so it will only take int part
    printf("the value of d is %d\n", d);

    float k = 3.0 / 9;
    printf("the value of k is %f\n\n", k);

    return 0;
}