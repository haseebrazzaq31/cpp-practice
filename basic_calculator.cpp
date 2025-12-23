#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    int sum,diff,product,quotient;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    sum=num1+num2;
    diff=num1-num2;
    product=num1*num2;
    quotient=num1/num2;
    cout<<"Sum = "<<sum<<endl;
    cout<<"diff = "<<diff<<endl;
    cout<<"product = "<<product<<endl;
    cout<<"quotient = "<<quotient<<endl;
    return 0;
}