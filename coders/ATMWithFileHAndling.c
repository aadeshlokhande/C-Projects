
#include<stdio.h>
int readPin()
{
    FILE *file;
    int a;
    file = fopen("pin.txt","r");
    fscanf(file, "%d", &a);
    fclose(file);
    return a;
}

int readBal()
{
    FILE *file;
    int a;
    file = fopen("bal.txt","r");
    fscanf(file, "%d", &a);
    fclose(file);
    return a;
}

void writePin(int a)
{
    FILE *file;
    file = fopen("pin.txt","w");
    fprintf(file, "%d", a);
    fclose(file);
}

void writeBal(int a)
{
    FILE *file;
    file = fopen("bal.txt","w");
    fprintf(file, "%d", a);
    fclose(file);
}

int main()
{
    int pin, upin, bal,amount, npin,cpin, choice;

    printf("Press 1: withdraw\n");
    printf("Press 2: check balance\n");
    printf("Press 3: change pin\n");
    printf("Press 4: deposite\n");

    printf("Enter your choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: 
            printf("Enter your pin = ");
            scanf("%d",&upin);
            pin = readPin();
            if(pin==upin)
            {
                printf("Enter a amount = ");
                scanf("%d",amount);
                bal = readBal();
                if(bal>=amount)
                {
                    bal = bal - amount;
                    printf("Transaction successfull\n");
                    printf("current balance = %d",bal);
                    writeBal(bal);
                }
                else
                {
                    printf("low balance\n");
                } 
            }
            else 
            {
                printf("wrong pin\n");
            }

    }
}