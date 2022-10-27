#include<iostream>
using namespace std;

int main()
{
    //Reverse number
    int number, reverseNumber=0;
    cout<<"Enter the number: ";
    cin >> number;

    while (number !=0)
    {
       reverseNumber *= 10;
       cout << "Reverse: " << reverseNumber <<endl;
       reverseNumber = reverseNumber + number % 10; 
       cout << "Check reverNum: "<< reverseNumber << endl;
       //remainder = number % 10
       number = number/10;
       cout << "Number: " << number << endl;
    }
    
    cout << "Reversed number: " << reverseNumber << endl;

    return 0;

}