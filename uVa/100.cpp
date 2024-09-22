#include<iostream>
#include<climits>

using namespace std ;

int main ()
{
    int i , j ;
    int a ;
    

    while (cin>>i>>j)
    {
        int max = 0 ;

        if ( i < j)
        {
            
            
            for ( a = i ; a <= j ; a++)
            {
                int cnt = 1 ;
                int num = a ;
                while ( num != 1)
                {
                    if ( num % 2 != 0)
                    {
                        num = 3 * num + 1 ;
                    }
                    else if ( num % 2 == 0)
                    {
                        num = num / 2 ;
                    }
                    cnt++;
                }
                if ( cnt > max)
                {
                    max = cnt ;
                }
            }
            cout<<i<<" "<<j<<" "<<max<<endl;
            
        }

        else 
        {
            for ( a = j ; a <= i ; a++)
            {
                int cnt = 1 ;
                int num = a ;
                while ( num != 1)
                {
                    if ( num % 2 != 0)
                    {
                        num = 3 * num + 1 ;
                    }
                    else if ( num % 2 == 0)
                    {
                        num = num / 2 ;
                    }
                    cnt++;
                }
                if ( cnt > max)
                {
                    max = cnt ;
                }
            }
            cout<<i<<" "<<j<<" "<<max<<endl;
        }

        
    }

    
}