#include<iostream>
using namespace std ;

void SimpleCalculator()
{
    int no1,no2,ch;
    char choice;
do{ cout<<"1.Addition\n2.Subtraction\n3.Multiplicatin\n4.Dividation";
    lable:
    cout<<"\nEnter the choice of calculator\n";
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"Enter the frist no: ";
        cin>>no1;
        cout<<"Enter the second no: ";
        cin>>no2;
        cout<<"\nAddition is "<<no1+no2;
        break;
    case 2:
        cout<<"Enter the first number : ";  
        cin>>no1;
        cout<<"Enter second number:";
        cin>>no2;
        cout<<"\nSubtraction is "<<no1-no2;
        break;
    case 3:
        cout<<"Enter the first number: ";
        cin>>no1;
        cout<<"Enter second number: ";
        cin>>no2;
        cout<<"\nMultiplication is "<<no1*no2;
        break;
    case 4:
        float no1,no2;
        cout<<"Enter the first number: ";
        cin>>no1;
        cout<<"Enter second number: ";
        cin>>no2;
        if(no2==0)
        {   cout<<"Can't divide by zero!";
            goto lable;
        }    
        else
            cout<<"\nDividation is "<<no1/no2;
        break;
    default:
        cout<<"Wrong choice!! Please cheack again";
        goto lable;
    }
    cout << "\nwould you like to do it again(y or n)";
    cin >> choice;
}while(choice=='y'||choice=='Y');

}

int main()
{ 
    SimpleCalculator();
return 0;
}