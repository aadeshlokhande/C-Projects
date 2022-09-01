// a = 10
// b = a

// a = 10 
// a = 12
#include<stdio.h>
int main()
{
    int a = 10;
    printf("a = %d\n",a);
    // a = a + 2
    a += 2 ;
    printf("a = %d\n",a);
    a -= 2 ;
    printf("a = %d\n",a);
    a *= 2 ;
    printf("a = %d\n",a);
    a /= 2 ;
    printf("a = %d\n",a);
    a %= 2 ;
    printf("a = %d\n",a);

}