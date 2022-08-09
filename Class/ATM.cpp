// ATM Program
#include<iostream>
using namespace std;
int main()
{
    int bal = 12000;
    int pin = 2299;
    int amount, upin, choice, npin, cpin;
    
    cout<<"Press 1 : withdraw"<<endl;
    cout<<"Press 2 : Check balance"<<endl;
    cout<<"Press 3 : Change pin"<<endl;
    cout<<"Press 4 : Deposite"<<endl;
    cout<<"Enter your choice = ";
    cin>>choice;
    
    if(choice==1)
    {
        cout<<"enter a pin = ";
        cin>>upin;
        
        if(pin==upin)
        {
            cout<<"Enter amount = ";
            cin>>amount;
            if(amount<=bal)
            {
                cout<<"Transaction successful"<<endl;
                cout<<"Current balance = "<<bal-amount<<endl;
            }
            else
            {
                cout<<"insufficient balance"<<endl;
            }
        }
        else
        {
            cout<<"wrong pin"<<endl;
        }
    }
    else if(choice==2)
    {
        cout<<"enter a pin = ";
        cin>>upin;
        
        if(pin==upin)
        {
            cout<<"Current balance = "<<bal<<endl;   
        }
        else
        {
            cout<<"wrong pin"<<endl;
        }
    }
    else if(choice==3)
    {
        cout<<"enter a pin = ";
        cin>>upin;
        
        if(pin==upin)
        {
            cout<<"enter a new pin = ";
            cin>>npin;
            cout<<"confirm your pin = ";
            cin>>cpin;
            if(cpin==npin)
            {
                cout<<"pin changed";
            }
            else
            {
                cout<<"pin doesn't match"<<endl;
            }
        }
        else
        {
            cout<<"wrong pin"<<endl;
        }
    }
    else if(choice==4)
    {
        cout<<"enter a pin = ";
        cin>>upin;
        
        if(pin==upin)
        {
            cout<<"Enter your amount = ";
            cin>>amount;
            cout<<"Current balance = "<<bal+amount<<endl;
        }
    }
    else
    {
        cout<<"Invalid choice"<<endl;
    }
    
    cout<<"Thank you...!!!"<<endl;
    return 0;
}
