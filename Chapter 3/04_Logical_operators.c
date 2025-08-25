#include <stdio.h>

int main()
{
    int a = 0 ;
    int b = 1;
    printf("the value of a and b is %d\n", a && b);
    printf("the value of a or b is %d\n", a || b);
    printf("the value of not of a is %d\n",!a);
// "!a"(not a) operator will change,
// false(0) to true(1 or any integer) or visa-versa


    if(a&&b){
        printf("both are true\n");
    }
    // is same as......
    if(a){
        if(b){
            printf("both are true\n");
        }
    }

    return 0;
}   