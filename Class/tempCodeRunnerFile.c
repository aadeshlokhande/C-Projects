#include<stdio.h>
int main()
{
    FILE *ptr;
    char data[20];
    ptr = fopen("myfile.txt","r");
    fscanf(ptr, "%s",data);
    printf("my data is %s\n",data);
    fclose(ptr);
}