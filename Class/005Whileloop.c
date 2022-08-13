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
// #include<stdio.h>
// int main()
// {
//     int a,b,con = 1;
//     while(con == 1)
//     {
//         printf("Enter a value of a = ");
//         scanf("%d",&a);
//         printf("Enter a value of b = ");
//         scanf("%d",&b);
//         printf("%d + %d = %d\n", a,b,a+b);
//         printf("do you want to continue 1/0 = ");
//         scanf("%d",&con);
//     }
// }

// ********** HomeWork ************

// get 2 values from user and print addtion till answer is 0
// get any number from user and check its negative
// get values from user till he didn't enter 0... when he enter zero calculate and print addition of all numbers

// get 2 values from user and print addtion till answer is 0
// #include<stdio.h>
// int main()
// {
//     int a,b,ans = 1;
//     while(ans != 0)
//     {
//         printf("Enter a value of a = ");
//         scanf("%d",&a);
//         printf("Enter a value of b = ");
//         scanf("%d",&b);
//         ans = a + b;
//         printf("%d + %d = %d\n", a,b,ans);
        
//     }
// }


// get any number from user and check its negative
// #include<stdio.h>
// int main()
// {
//     int num=1;
//     while(0<num)
//     {
//         printf("Enter a negative number = ");
//         scanf("%d",&num);
//     }

//     printf("Thanks for entring Negative number\n");
// }


// get values from user till he didn't enter 0... when he enter zero calculate and print addition of all numbers

// Ganesh Program
// #include<stdio.h>
// int main()
// {
//     int n, sum = 0;
//     printf("enter a number,enter zero to end input = " );
//     scanf("%d",&n);
//     while (n != 0)
//     { 
//         sum += n;
//         scanf("%d",&n);
//     } 
//     printf("sum is %d\n",sum);
// }

// actual homework
#include<stdio.h>
int main()
{
    int num = 1,sum = 0;
    while(num!=0)
    {
        printf("enter a number = ");
        scanf("%d",&num);
        sum = num + sum;
    }
    printf("Sum = %d",sum);
}

// My name is Aadesh. I belong to Nagpur. I'm a student of M. P. Deo Dharampeth science College. My natural inclination towards technology. I love to do something in IT field. I'm a android developer and learning programming language to improve my skills. I don't have a fix wake up time. It depends when I sleep. Usually i wake up 9 o'clock. I don't want to get down the bed and see my cellphone and check the messages I got overnight. I get down the bed and go to washroom. I get my brush and wash teeth. Then I take a shower after that I dry and comb my hair. I have my breakfast around 10.30AM. then use some social media. Check messages, see posts. Then I open My PC and watch some python tutorials. And do practice. After that I do some small talks with family. Then take launch while watching YouTube on my phone. After that I play some mobile games then I open my books and do some homework. I get ready in evening between 6 to 6.30 daily for my english tution classes. I do call to priya at 6.30. and pick her then we go together to class.

// R 
// vowel  R - A 
// consonant R - R 
// r - R 
// rr - 
// sorry

// I do study.
// do you study? 

// I did study.
// did i study?