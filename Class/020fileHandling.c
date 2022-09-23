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
// #include<stdio.h>
// int main()
// {
//     FILE *ptr;
//     char data[20];
//     ptr = fopen("myfile.txt","r");
//     fscanf(ptr, "%s",data);
//     printf("my data is %s\n",data);
//     fclose(ptr);
// }


// Write mode 
// #include<stdio.h>
// int main()
// {
//     FILE *file;
//     file = fopen("myfile001.txt","w");
//     fprintf(file, "HEllo, \nbuddy how are you");
//     fclose(file);
// }



// Append mode 
// #include<stdio.h>
// int main()
// {
//     FILE *file;
//     file = fopen("myfile.txt","a");
//     fprintf(file, "HEllo, buddy how are you\n");
//     fclose(file);
// }
