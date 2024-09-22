#include <iostream>
#include <cmath>

using namespace std ;
int  main ()
{
    int h1,m1,h2,m2;

    while (1)
    {
        cin>>h1>>m1>>h2>>m2;

        if ((h1 == 0 && h2 == 0 )&&(m1 == 0 && m2 == 0))
        {
            break;
        }
        else if ( (h1 < h2 && h2 <=12) && m1 < m2)
        {
            cout<<(60*(h2-h1)+(m2-m1))<<endl;
        }
        else if ( (h1 < h2 && h2 <=12) && m1 > m2)
        {
            cout<<60-m1+m2<<endl;
        }
        else if ( (h1 < h2 && h2 <=12) && m1 == m2)
        {
            cout<<(h2-h1)*60<<endl;
        }
        else if ( (h1 > h2 && h1 <=12) && m1 < m2)
        {
            cout<<(60*(23-(h1-h2))+(60-m1+m2))<<endl;
        }
        else if ( (h1 > h2 && h1 <=12) && m1 > m2)
        {
            cout<<(60*(23-(h1-h2))+(60-m1+m2))<<endl;
        }
        else if ( (h1 > h2 && h1 <=12) && m1 == m2)
        {
            cout<<(60*(24-(h1-h2))-60)<<endl;
        }

        else if ( (h1 < h2 && h2 <=23) && (m1 > m2))
        {
            cout<<(60*(h2-h1)+(60-m1+m2)-60)<<endl;
        }
        else if ( (h1 < h2 && h2 <=23) && (m1 < m2))
        {
            cout<<(60*(h2-h1)+(60-m1+m2)-60)<<endl;
        }
        else if ( (h1 < h2 && h2 <=23) && (m1 == m2))
        {
            cout<<(60*(h2-h1))<<endl;
        }
        else if ( (h1 > h2 && h1 <=23) && (m1 < m2))
        {
            cout<<(60*(23-h1+h2)+(60-m1+m2)+60)<<endl;
        }
        else if ( (h1 > h2 && h2 <=23) && (m1 > m2))
        {
            cout<<(60*(23-h1+h2)+(60-m1+m2))<<endl;
        }
        else if ( (h1 > h2 && h2 <=23) && (m1 == m2))
        {
            cout<<(60*(23-h1+h2)+60)<<endl;
        }
        else if ( (h1 == h2) && (m1 < m2))
        {
            cout<<m2-m1<<endl;
        }
        else if ( (h1 == h2) && (m1 > m2))
        {
            cout<<((60*23)+(60-m1+m2))<<endl;
        }   
        else if ( (h1 == h2) && (m1 == m2))
        {
            cout<<((h1-h2)+(m1-m2))<<endl;
        }
    }
    
    
}