#include<iostream>
using namespace std;

int main()
{
    // Check even or odd number.

    //Variable declare
    int number;
    cout << "Enter a number for checking = ";
    cin >> number;

    if(number % 2 == 0){
        cout << "Number is even." <<endl;
    }
    else{
        cout << "Number is odd." << endl;
    }
    cout<< "Thank you, Bye";
    return 0;

}