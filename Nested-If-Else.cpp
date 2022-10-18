#include<iostream>
using namespace std;

int main()
{
    //User enters side length of a tringle (a,b,c)
    //Program should write out whether that traingle is equilateral, isosceles, or scalene

    float a, b, c;
    cout << "Enter a, b, and c: ";
    cin >> a >> b >> c;

    if(a == b && b == c){
        cout << "Equilateral traingle";
    }
    else{
        if(a != b && a != c && b != c)
            cout << "Scalene traingle";
        else
            cout << "Isosceles traingle";
    }
    
    return 0;

}