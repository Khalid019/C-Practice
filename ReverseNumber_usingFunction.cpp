#include<iostream>
using namespace std;


   int revNum(int number){
    int reverseNumber=0;
    while (number !=0)
    {
       reverseNumber *= 10;
       reverseNumber = reverseNumber + number % 10; 
       //remainder = number % 10
       number = number/10;
    }

    return reverseNumber;
}

int main()
{
    //Reverse number
    int number, rev=0;
    cout<<"Enter the number: ";
    cin >> number;
    // call function
    rev = revNum(number);
    cout << "Reversed number: " << rev << endl;

    return 0;

}