#include <iostream>
#include <cmath>

using namespace std ;
int  main (){

    int x , ye , mo , da ;
    cin>>x;
    ye = x / 365 ;
    x = x % 365 ;
    mo = x / 30 ;
    x = x % 30 ;
    cout<<ye<<" years\n";
    cout<<mo<<" months\n";
    cout<<x<<" days\n";
}