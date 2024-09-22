#include<iostream>
#include<climits>

using namespace std ;
 
int main (){
 
    int n,i=0;
 
    while (1)
    {
        cin>>n;
 
 
        if ( n == 1999)
        {
            cout<<"Correct"<<endl;
            break;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
 
        i++;
    }
 
 
 
    return 0;
}