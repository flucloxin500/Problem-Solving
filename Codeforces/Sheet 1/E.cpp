#include <iostream>
#include <iomanip>

using namespace std ;
 
int main (){
 
    double pie,R,x;
 
    pie = 3.141592653;
 
    cin >> R ;
    x = pie * R * R ;
 
    cout <<setprecision(9) << fixed;
    cout << x;

}