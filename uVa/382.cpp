#include<iostream>
#include<climits>

using namespace std ;

int main ()
{
    int N ;
    int i ;
    //int sum = 0 ;
    cout<<"PERFECTION OUTPUT"<<endl;

    
    
    while(1)
    {
        cin>>N;
        

        int sum = 0 ;

        if ( N == 0 )
        {
            cout<<"END OF OUTPUT"<<endl;
            break;
        }
        else
        {
            for ( i = 1 ; i < N ; i++)
            {
                if ( N % i == 0)
                {
                    sum += i ;
                }
            }

            
        }

        
        if( sum == N)
        {
            printf("%5d  PERFECT\n",N) ;
        }
        else if ( sum > N)
        {
            printf("%5d  ABUNDANT\n",N) ;
        }
        else if ( sum < N)
        {
            printf("%5d  DEFICIENT\n",N) ;
        }
        
    }
}