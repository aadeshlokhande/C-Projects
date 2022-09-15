// counting 1 - 100

// #include<stdio.h>
// int main()
// {
//     int a = 0;
//     for (int i = 1; i<=10; i++)
//     {
//         for(int j =1; j<=10; j++)
//         {
//             ++a;
//             printf("%d\t",a);
//         }
//         printf("\n");
//     }
// }


// 1 - 10 tables
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=10;i++)
//     {
//         for(j=1;j<=10;j++)
//         { 
//             printf("\t%d",i*j);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=10;i++)
//     {
//         for(j=1;j<=10;j++)
//         { 
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *********************Homework****************

// 1 0 0 
// 1 0 0 
// 1 0 0 

// 11 12 13 
// 21 22 23 
// 31 32 33

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=3; i++)
//     {
//         for(int j = 1; j<=3 ; j++)
//         {
//             if(i==j)
//             {
//                 printf("1 ");
//             }
//             else 
//             {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
// }





// 1 1 1 
// 0 0 0 
// 0 0 0 

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=3; i++)
//     {
//         for(int j = 1; j<=3 ; j++)
//         {
//             if(i==1)
//             {
//                 printf("1 ");
//             }
//             else 
//             {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
// }

// 1 0 0 
// 0 1 0 
// 0 0 1 

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=3; i++)
//     {
//         for(int j = 1; j<=3 ; j++)
//         {
//             if(i==j)
//             {
//                 printf("1 ");
//             }
//             else 
//             {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
// }

// 1 1 1 
// 0 1 1 
// 0 0 1 



// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=3; i++)
//     {
//         for(int j = 1; j<=3 ; j++)
//         {
//             if(i<=j)
//             {
//                 printf("1 ");
//             }
//             else 
//             {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
// }

// 1 0 0 
// 1 1 0 
// 1 1 1 


// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=3; i++)
//     {
//         for(int j = 1; j<=3 ; j++)
//         {
//             if(i>=j)
//             {
//                 printf("1 ");
//             }
//             else 
//             {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
// }

// 1 0 1 
// 0 1 0 
// 1 0 1 



// 11 12 13 
// 21 22 23 
// 31 32 33


// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=5 ; j++)
//         {
//             if((i+j)%2==0)
//             {
//                 printf("1 ");
//             }
//             else 
//             {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
// }


// 0 1 0 
// 1 1 1
// 0 1 0 

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=3; i++)
//     {
//         for(int j = 1; j<=3 ; j++)
//         {
//             if(i==2 || j==2)
//             {
//                 printf("1 ");
//             }
//             else 
//             {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
// }


// * 
// * * 
// * * *
// * * * *
// * * * * *


// * * * * *
// * * * * 
// * * *
// * *
// *



// * * * * *
//   * * * *
//     * * *
//       * *
//         * 
    

// * * * * *
// *       *
// *       *
// *       *
// * * * * *


// * 
// * *
// *   *
// *     *
// * * * * *

//       1 
//     2   3
//   4   5   6
// 7   8   9   10

// #include<stdio.h>
// int main()
// {
//     int a = 0;
//     for(int i = 1; i<=4; i++)
//     {
//         for(int j = 4; j>=i; j--)
//         {
//             printf(" ");
//         }
//         for(int k = 1; k<=i; k++)
//         {
//             ++a;
//             printf("%d ",a);
//         }
//         printf("\n");
//     }
// }
