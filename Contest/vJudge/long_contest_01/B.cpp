
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string ne ;

    cin>> ne ;
    int i , j;

    int x , f = 0;
    x = ne.length();

    for ( i = 0 ; i < x ; i++)
    {
        for ( j = i+1 ; j < x ; j++)
        {
            if ( ne[i] == ne[j])
            {
                f++;
                break;
            }
        }
    }

    if ((x - f) % 2 == 0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else 
    {
        cout<<"IGNORE HIM!"<<endl;
    }
}

