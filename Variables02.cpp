#include<iostream>
using namespace std;

int main()
{
    //declare variables and input variables
    float annual_salary;
    cout<<"Input the amount of annual salary is = ";
    cin>> annual_salary;
    float monthly_salary = annual_salary/12;
    float per_day_salary = annual_salary/365;

    //Output
    cout<<"Your monthly Salary is "<< monthly_salary;
    cout<<"\nAfter 10 years your Salary is "<< annual_salary * 10;
    
    return 0;

}