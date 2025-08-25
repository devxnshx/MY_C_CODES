#include <stdio.h>

int main() {
    int c ;
    float f;
    printf("temp in celcius = ");
    scanf("%d", &c);
    f = (c*(9.0/5.0))+32;
printf("temp in fahrenheit = %.2f", f);

     return 0;
}