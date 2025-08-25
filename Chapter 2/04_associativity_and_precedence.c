// OPERATORS OF HIGHER PRIORITY ARE EVALUATED FIRST,
// IN THE ABSENE OF PARANTHESIS"()"
#include <stdio.h>

int main()
{
    int a = 3, b = 6, c = 9;

    printf("\n\nthe value is %d\n", a * b / c + 7);
    printf("the value is %d\n\n", 3 * b / 2 * c + 7 * a);
    /* STEPS of HOW THIS WILL EVALUATE acc. to
    precedence & associativity

    3*b/2*c + 7*a
    18/2*c+7*a
    9*c+7*a
    81+7*a
    81+21
    102

    */
    return 0;
}
// PRO TIP:
// ALWAYS USE PARANTHESIS TO AVOID ASSOCIATIVITY;

