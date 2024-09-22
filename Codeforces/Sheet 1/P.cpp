#include <iostream>
#include <cmath>

using namespace std ;

int main (){

    int X , rem;
    cin >> X;
    rem = X / 1000;

    if ( rem % 2 == 0)
    {
        cout<<"EVEN\n";
    }
    else if ( rem % 2 != 0)
    {
        cout<<"ODD\n";
    } 
    
}