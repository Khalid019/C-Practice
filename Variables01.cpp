#include<iostream>
using namespace std;

int main()
{
    //declare variables
    float annual_salary = 50000.99;
    float monthly_salary = annual_salary/12;
    float per_day_salary = annual_salary/365;

    //Output
    cout<<"Your monthly Salary is "<< monthly_salary;
    
    return 0;

}