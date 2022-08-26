//Calculator
//By Artin Moghadasi
//@Artin.Projects

#include <iostream>
using namespace std;
void add();
void sub();
void div();
void mul();
int num1,num2;

int main()
{
    int UserChoice,round;
    char UseOfCalculator;
    round=1;
    while (1)
    {
    if(round==1)
    cout<<"Welcome to Turing Calculator! \n";
    else
    cout<<"Welcome back to Turing Calculator! \n";

    cout<<"Round: "<<round<<endl;
    cout<<"Enter your Choice: \n";
    cout<<"1. Addition \n";
    cout<<"2. Subtraction \n";
    cout<<"3. Division \n";
    cout<<"4. Multiplication \n";
    cout<<"Userchoice: ";
    cin>>UserChoice;
    cout<<endl;

    switch(UserChoice)
    {
        case 1:
        add();
        break;
        case 2:
        sub();
        break;
        case 3:
        div();
        break;
        case 4:
        mul();
        break;
        default:
        cout<<"Please select valid choice for next time";
        break;
    }

            cout<<endl<<"Do you want to use this calculator again?(y/n) \n";
            cin>>UseOfCalculator;
            if(UseOfCalculator=='y')
            round++;
            else 
            {
            cout<<"Thanks!";
            exit(0);
            }
    }

    return 0;
}

void add()
{
    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter Second Number: ";
    cin>>num2;
    cout<<"The Sum is: "<<num1+num2;
}
void sub()
{
    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter Second Number: ";
    cin>>num2;
    cout<<"The Sub is: "<<num1-num2;
}
void div()
{
    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter Second Number: ";
    cin>>num2;
    cout<<"The Division is: "<<num1/num2;
}
void mul()
{
    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter Second Number: ";
    cin>>num2;
    cout<<"The Multiplication is: "<<num1*num2;
}
//The Program is finished!