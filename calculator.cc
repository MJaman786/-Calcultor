//Program of switch case for making calculator

#include<iostream>
using namespace std;

int main(){
char cal; //cal means calulation:
    int num1,num2,a;
    cout<<"Enter 1st number :"<<endl;
    cin>>num1;

    cout<<"Enter 2nd number:"<<endl;
    cin>>num2;

    cout<<"Enter which operation you have to perform: '+' ,'-' ,'*' ,'/'"<<endl;
    cin>>cal;

    switch (cal)
    {
    case '+':
    cout<<"Number1 + Number2 is:"<<num1 + num2<<endl;
    break;
    case '-':
    cout<<"Number1 - Number2 is:"<<num1 - num2<<endl;
    break;
    case '*':
    cout<<"Number1 * Number2 is:"<<num1 * num2<<endl;
    break;
    case '/':
    cout<<"Number1 / Number2 is:"<<num1 / num2<<endl;
    break;
    }
    cout<<"Done";
    cin>>a;
}