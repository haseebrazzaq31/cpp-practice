#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float num1;
    float num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number\n";
    cin>>num2;
    float sum=num1+num2;
    float diff=num1-num2;
    float product=num1*num2;
    float quotient=num1/num2;
    cout<<"-----Results before formating-----\n";
    cout<<"Sum = "<<sum<<endl;
    cout<<"difference = "<<diff<<endl;
    cout<<"product = "<<product<<endl;
    cout<<"quotient = "<<quotient<<endl;
    cout<<"--------------------------------"<<endl<<endl;
    cout<<"Setting precision to 3 decimal points"<<endl;
    cout<<"-----Results after precision-----\n";
    cout<<"Sum = "<<setprecision(3)<<sum<<endl;
    cout<<"difference = "<<setprecision(3)<<diff<<endl;
    cout<<"product = "<<setprecision(3)<<product<<endl;
    cout<<"quotient = "<<setprecision(3)<<quotient<<endl;
    cout<<"--------------------------------"<<endl<<endl;
    //casting to integer type
    int sum2=sum;
    int diff2=diff;
    int product2=product;
    int quotient2=quotient;
    cout<<"Results after casting to int type"<<endl;
    cout<<"Sum = "<<sum2<<endl;
    cout<<"difference = "<<diff2<<endl;
    cout<<"Product = "<<product2<<endl;
    cout<<"quotient = "<<quotient2<<endl;
    cout<<"--------------------------------"<<endl;
    return 0;
}