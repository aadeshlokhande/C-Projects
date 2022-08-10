// While loop

// syntax
// while(condition)
// {
//     statements;
// }

// example 1
// #include<stdio.h>
// int main()
// {
//     int a = 1;
//     while(a<=10)
//     {
//         printf("Hello ganesh %d\n",a);
//         ++a;
//     }
// }

// example 2
#include<stdio.h>
int main()
{
    int a,b,con = 1;
    while(con == 1)
    {
        printf("Enter a value of a = ");
        scanf("%d",&a);
        printf("Enter a value of b = ");
        scanf("%d",&b);
        printf("%d + %d = %d\n", a,b,a+b);

        printf("do you want to continue 1/0 = ");
        scanf("%d",&con);
    }
}




