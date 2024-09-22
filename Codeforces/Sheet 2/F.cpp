#include<iostream>
#include<climits>

using namespace std ;
 
int main (){
 
    int n,i,x;
    cin>>n;
 
    for ( i = 1; i <= 12 ; i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i <<endl;
    }

    return 0;
}