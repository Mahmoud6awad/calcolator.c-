#include <iostream>
using namespace std;
int main()
{
    char oper;
    float number1;
    float number2;
    cout<<"enter an operator (+,-,*,/) : ";
    cin>>oper;
    cout<<"enter two number\n";
    cin>>number1;
    cin>>number2;
    switch(oper)
    {
        case '+':
        cout<<number1<<"+"<<number2<<"="<<number1+number2<<endl;
        break;
        case '-':
        cout<<number1<<"-"<<number2<<"="<<number1-number2<<endl;
        break;
        case '*':
        cout<<number1<<"*"<<number2<<"="<<number1*number2<<endl;
        break;
        case '/':
        cout<<number1<<"/"<<number2<<"="<<number1/number2<<endl;
        break;
        default :
        cout<<"error\n";  
    }
    

    return 0;
}