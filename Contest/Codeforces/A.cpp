/// Tried , but Unsolved
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,n,m;
    string x,s;
    cin>>t;
    while(t--)
    {
        int count=0,flag=0;
        cin>>n>>m;
        cin>>x;
        cin>>s;
        while(x.find(s)!=1)
        {
            x+=x;
            count++;
            if(x.length()>m)
            {
                break;
            }
        }
        cout<<count<<endl;



    }

}