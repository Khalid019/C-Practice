#include<iostream>
using namespace std;

int main()
{
    // +, -, , * --> Arithmatic Operators: binary operators
    cout << 4 + 3 << endl;
    cout << 5 / 2 << endl; // check output: integer
    cout << 5 / 2.0 << endl; // check output: float
    cout << 5 % 2 << endl;  //remainder

    // ++, -- increament decreament operator

    // Increament operator
    int counter = 5;
    counter++; // counter = counter + 1
    cout << counter << endl;

    //Decreament operator
    counter--; // counter = present counter - 1
    cout<< counter << endl;

    cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" <<endl;
    //implement operator
    int counter2 = 5;
    //cout << counter2++ << endl; //post-increament
    //cout << ++counter2 << endl; //pre-increament

    cout << --counter2 << endl; //post-increament

    system("cls");

    cout << "Relational operators: <, >, <=, >=, ==, != " <<endl;
    int a = 2, b = 3;
    cout << (a > b) << endl;
    cout << (a <= b) << endl;
    cout << (a != b) << endl;

    cout <<"Logical Operator: &&, ||, !" << endl;
    cout << (a ==5 && b == 3) << endl;
    cout << (a ==5 || b == 3) << endl;
    cout << !(a ==5 || b == 3) << endl;

    cout<<"Priority operators: " << endl;
    cout << !(a ==5 && b == 3+3) << endl; //arithmatic first

    cout<<"Assignment operators: =, +=, -=, /=, %= " << endl;
    int x = 5;
    x+=7; //x = x + 7 --> assign valuee to x
    cout<< x << endl;

    return 0;

}