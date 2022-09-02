// conditional statements

// if 
// if(condition)
// {
//     statements
// }

// Example
// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age = ");
//     scanf("%d",&age);

//     if(age>18)
//     {
//         printf("Adult ");
//     }

//     printf("Boy");
// }
// ___________________________

// if else 
// if(condition)
// {
//     statements
// }
// else 
// {
//     statements
// }


// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age = ");
//     scanf("%d",&age);

//     if(age>18)
//     {
//         printf("you can vote\n");
//     }
//     else 
//     {
//         printf("you can't vote\n");
//     }
// }


#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number = ");
    scanf("%d",&num);

    if(num>=0)
    {
        printf("+ve number\n");
    }
    else 
    {
        printf("-ve number\n");
    }
}

// nested if else 
// if else ladder 