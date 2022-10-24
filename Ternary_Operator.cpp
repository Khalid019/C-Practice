#include<iostream>
using namespace std;

int main()
{
    int hostUserNum, GuestUserNum;
    cout << "Enter the hostUserNum: ";
    cin >> hostUserNum;
    cout << "Enter the GuestUserNum: ";
    cin >> GuestUserNum;

    //Ternary Operation
    (hostUserNum == GuestUserNum)? cout << "Correct" : cout << "Wrong";
    
    /*
        if(hostUserNum == GuestUserNum)
            cout << "Correct";
        else
            cout << "Wrong";
    */
    return 0;

}