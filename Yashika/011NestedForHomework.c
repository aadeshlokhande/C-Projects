// -------------------------------------------------
// 11 12 13
// 21 22 23
// 31 32 33

// 1 1 1 
// 0 0 0 
// 0 0 0 

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=3; i++)
//     {
//         for(int j = 1; j<=3; j++)
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
// 1 0 0 
// 1 0 0 
// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=3; i++)
//     {
//         for(int j = 1; j<=3; j++)
//         {
//             if(j==1)
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

// 11 12 13
// 21 22 23
// 31 32 33

// 1 0 0 
// 0 1 0 
// 0 0 1

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=3; i++)
//     {
//         for(int j = 1; j<=3; j++)
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

// 11 12 13
// 21 22 23
// 31 32 33
// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=3; i++)
//     {
//         for(int j = 1; j<=3; j++)
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
//         for(int j = 1; j<=3; j++)
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


// 0 1 0 
// 1 1 1 
// 0 1 0 

// 11 12 13
// 21 22 23
// 31 32 33

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=3; i++)
//     {
//         for(int j = 1; j<=3; j++)
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


// 1 0 1 
// 0 1 0 
// 1 0 1 

// 11 12 13
// 21 22 23
// 31 32 33


// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=3; i++)
//     {
//         for(int j = 1; j<=3; j++)
//         {
//             if((i+j) % 2 == 0)
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



// -------------------------------------------------

// * * * * *
// *       *
// *       *
// *       *
// * * * * *

// 11 12 13 14 15
// 21 22 23 24 25
// 31 32 33 34 35
// 41 42 43 44 45
// 51 52 53 54 55


// 11 12 13
// 21 22 23
// 31 32 33

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=5; j++)
//         {
//             if(i==1 || i==5 || j==1 || j == 5)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }


// * * * * *
// * *   * *
// *   *   *
// * *   * *
// * * * * *

// 11 12 13 14 15
// 21 22 23 24 25
// 31 32 33 34 35
// 41 42 43 44 45
// 51 52 53 54 55

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=5; j++)
//         {
//             if(i==j || i==5 ||i==1||j==5|| j==1 || (i+j)==6 )
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }






// *
// * *
// *   *
// *     *
// * * * * *

// // 11 12 13 14 15
// // 21 22 23 24 25
// // 31 32 33 34 35
// // 41 42 43 44 45
// // 51 52 53 54 55

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=5; j++)
//         {
//             if(i==j || i==5 || j==1)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }


// 1-100 counting
// 1 2 3 4....10 
// 11 12 13.....20
// 21 22 23.....30
// .
// .
// .
// 91 92 93......100

// #include<stdio.h>
// int main()
// {
//     int a = 0;
//     for(int i = 1; i<=10; i++)
//     {
//         for(int j=1; j<=10; j++)
//         {
//             ++a;
//             printf("%d\t",a);
//         }
//         printf("\n");
//     }
// }