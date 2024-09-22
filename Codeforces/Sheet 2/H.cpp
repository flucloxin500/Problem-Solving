#include<iostream>
#include<climits>

using namespace std ;
int main()
{
    int n , i , f1 = 0 , f2 = 0 ;

    cin>>n;

    for(i=2; i<n; i++)
    {
        if (n % i == 0)
        {
            f1 = 1 ;
        }
        else 
        {
            f2=1;
        }
    }

    if ( f1 > 0 )
    {
       cout<<"NO"<<endl;
    }
    else if ( f1 < 1 )
    {
       cout<<"YES"<<endl;
    }
    else if (n==1)
    {
        cout<<"NO"<<endl;
    }


    return 0;
}