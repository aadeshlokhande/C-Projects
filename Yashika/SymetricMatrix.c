// 10 20 30 
// 20 40 50 
// 30 50 60 

// 00 01 02 
// 10 11 12
// 20 21 22

#include<stdio.h>
int main()
{
    int a = 0;
    int mat[3][3];

    for(int i = 0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            printf("Enter a number = ");
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i = 0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            if(mat[i][j]!=mat[j][i])
            {
                ++a;
            }
        }
    }

    for(int i = 0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }

    if(a==0)
    {
        printf("symetric matrix");
    }
    else 
    {
        printf("assymetric matrix");
    }
}