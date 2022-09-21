// file handling 
// ram
// expensive - 2500 - 4gb - 8gb
// fast 
// volatile 

// rom - HDD - SSD
// cheap - 2500 - 500gb
// slow
// Non-volatile

// ---------------------

// Read mode 
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


// Write mode 
// Append mode 