/*Sometimes our program gets bigger in size and it's not possible for a programmer to
track which piece of code is doing what.

Function is a way to break our code into chunks so that it is possible for a programmer
to reuse them.*/


#include <stdio.h>

// Function prototype
int sum(int,int);


//Function definition 
int sum(int x,int y){
     // printf("the sum is %d\n",x+y);
     return  x+y;
}

int main() {
    int a=1;
    int b=2;
     //int c=a+b;
     //printf("the sum is %d\n",c);
     int c = sum(a,b); //Function Call
     printf("%d\n",c);
     

    int a1=12;
    int b1=23;
//     int c1=a1+b1;
//     printf("the sum is %d\n",c1);
     sum(a1,b1); //Function Call


    int a2=13;
    int b2=25;
//     int c3=a3+b3;
//     printf("the sum is %d\n",c3);
     sum(a2,b2); //Function Call

     sum(3,56); //Function Call

     return 0;
}