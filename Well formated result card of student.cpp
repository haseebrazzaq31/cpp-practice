#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int marks1,marks2,marks3,marks4,marks5;
    int totalmarks=500;
    int totalobtainedmarks;
    float overallpercentage;
    string overallgrade;
    string status;
    cout<<"Enter marks your marks in English out of 100"<<endl;
    cin>>marks1;
    cout<<"Enter marks your marks in Maths out of 100"<<endl;
    cin>>marks2;
    cout<<"Enter marks your marks in Physics out of 100"<<endl;
    cin>>marks3;
    cout<<"Enter marks your marks in Chemistry out of 100"<<endl;
    cin>>marks4;
    cout<<"Enter marks your marks in Computer out of 100"<<endl;
    cin>>marks5;
    totalobtainedmarks=marks1+marks2+marks3+marks4+marks5;
    overallpercentage=(totalobtainedmarks/100)*totalmarks;
    if (overallpercentage>=90)
    {
        overallgrade="A positive";
    }else if (overallpercentage >=80)
    {
        overallgrade="A";
    }else if (overallpercentage>=70)
    {
        overallgrade="B";
    }else if (overallpercentage>=60)
    {
        overallgrade="C";
    }else if (overallpercentage >=50)
    {
        overallgrade="D";
    }else
    {
        overallgrade="F";
    }
    cout<<"----------------------------------------------------\n";
    cout<<"--------------Student Report card-------------------\n";
    cout<<left<<setw(20)<<"Subject";
    cout<<left<<setw(20)<<"Obtained marks";
    cout<<left<<setw(20)<<"Total marks"<<endl;
    cout<<"----------------------------------------------------\n";
    cout<<left<<setw(20)<<"English";
    cout<<left<<setw(20)<<marks1;
    cout<<left<<setw(25)<<"100"<<endl;
    cout<<left<<setw(20)<<"maths";
    cout<<left<<setw(25)<<marks2;
    cout<<left<<setw(25)<<"100"<<endl;
    cout<<left<<setw(20)<<"physics";
    cout<<left<<setw(25)<<marks3;
    cout<<left<<setw(25)<<"100"<<endl;
    cout<<left<<setw(20)<<"Chemistry";
    cout<<left<<setw(25)<<marks4;
    cout<<left<<setw(25)<<"100"<<endl;
    cout<<left<<setw(20)<<"Computer";
    cout<<left<<setw(25)<<marks5;
    cout<<left<<setw(25)<<"100"<<endl;
    cout<<"----------------------------------------------------\n";
    cout<<left<<setw(0)<<"Obtained Marks= "<<totalobtainedmarks<<endl;
    cout<<left<<setw(35)<<"Total marks = 500"<<endl;
    cout<<setprecision(2)<<"Percentage= "<<overallpercentage<<endl;
    cout<<"Overall Grade "<<overallgrade<<endl;
    if (overallpercentage>50)
    {
        cout<<"Congratulations! You are Passed"<<endl;;
    }else
    {
        cout<<"You failed the Examination"<<endl;
    }
    cout<<"----------------------------------------------------\n";
    return 0;
}