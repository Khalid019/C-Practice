#include<iostream>
using namespace std;

int main()
{
   cout << "******* Problem with Switch Case *******" <<endl;

    // Variable declaration and Enter
    int number;
    cout << "Enter the number: ";
    cin >> number;

    //Operation
    switch (number)
    {
    case 10:
        cout << "The number is x = 10" <<endl;
        break;

    case 20:
        cout << "The number is x = 20" <<endl;
        break;    

    case 30:
        cout << "The number is x = 30" <<endl;
        break;    
    
    default:
        cout <<"The number is not 10, 20, & 30" << endl;
        break;
    }
    
    return 0;

}