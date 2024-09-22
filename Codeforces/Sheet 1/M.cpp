#include <iostream>
#include <cmath>

using namespace std ;

int main (){

    char ch;

    cin>>ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout<<"ALPHA\n";
        
        cout<<"IS CAPITAL\n";
    }
    
    else if (ch >= 'a' && ch <= 'z')
    {
        cout<<"ALPHA\n";
        
        cout<<"IS SMALL\n";
    }

    else if (ch >= '0' && ch <= '9')
    {
        cout<<"IS DIGIT\n";
    }
    
}