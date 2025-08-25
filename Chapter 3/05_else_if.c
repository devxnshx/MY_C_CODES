#include <stdio.h>

int main()
{
    int age = 35;

    if (age>60){
        printf("you can drive and you are a senior cetizen");
    }

     else if (age>40){
        printf("you can drive and you are elder ");
    }

     else if (age>18){
        printf("you are adult,you can drive");
    }
// THERE CAN BE ANY NUMBER OF "ELSE IF"
    else{
        printf("you can not drive ");
    }
// LAST "else" IS OPTIONAL 
    return 0;
}