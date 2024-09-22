#include <iostream>
#include <cmath>

using namespace std ;

int  main (){

    double a,b;
    cin>>a>>b;

    if (a + b == 0)
    {
        cout<<"Origem\n";
        
    }
    else if (a == 0 )
    {
        cout<<"Eixo Y\n";
        
    }
    else if (b == 0 )
    {
        cout<<"Eixo X\n";
        
    }
    else if (a > 0 && b > 0)
    {
        cout<<"Q1\n";
        
    }
    else if (a < 0 && b > 0)
    {
        cout<<"Q2\n";
        
    }
    else if (a < 0 && b < 0)
    {
        cout<<"Q3\n";
        
    }
    else if (a > 0 && b < 0 )
    {
        cout<<"Q4\n";
        
    }
    
}