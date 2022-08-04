// conditional statements - decision making statements

// syntax
// if 
// if(condition)
// {
//     statements;
// }

// example
#include<stdio.h>
int main()
{
    int age = 20;

    if(age>18)
    {
        printf("Adult ");
    }

    printf("Boy\n");
}


// *********** if else ***********
// syntax
// if(condition)
// {
//     statements;
// }
// else
// {
//     statements;
// }

// example 1:
#include<stdio.h>
int main()
{
    int age = 20;

    if(age>18)
    {
        printf("you can vote\n");
    }
    else
    {
        printf("you can't vote\n");
    }
}


// example 2:
#include<stdio.h>
int main()
{
    int num = -20;

    if(num>0)
    {
        printf("+ve number\n");
    }
    else
    {
        printf("-ve number\n");
    }
}
// ++++++++++++++++++++++++++++++++++

// ############# scanf function ##########
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number = ");
    scanf("%d",&a);

    printf("a = %d\n",a);
}

# homework
# get value from user and print the number is even or odd 
# get year from user and check its leap year or not 
# get 2 values from user and print greater number 
# get 3 angles from user and check its triangle or not
