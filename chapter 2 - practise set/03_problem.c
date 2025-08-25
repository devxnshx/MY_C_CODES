// THIS SEEMS LENGTHY , SO W'LL TRY TO MAKE IT SHORTER FOR CODE TO BE READABLE MORE EASILY


// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("ENTER THE VALUE ");
//     scanf("%d", &a);
//      if (a % 97 == 0)
//     {
//         printf("The value of a is divisible by 97\n");
//     }
//     else
//     {
//         printf("The value of a is not divisible by 97\n");
//     }

//     return 0;
// }

 #include <stdio.h>

int main()
{
    int a;
    printf("Enter a value: ");
    scanf("%d", &a);
    if (a % 97)
    // 0 means divisible, non-zero means not divisible
    // non-zero value means 1(true) , so this function will return true value first 
        printf("Not divisible by 97\n");
    else
        printf("Divisible by 97\n");
    return 0;
}

