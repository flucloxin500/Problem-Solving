#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,x,n,maxi1,maxi2,count,j,arr[120],count2,index,flag;
    cin>>t;
    while(t--)
    {
        maxi1=0;
        maxi2=0;
        count=0;
        count2=0;
        flag=0;
        cin>>n;
        for(int i=0,j=0;i<n;i++)
        {
            cin>>a>>x;
            if(a==x)
            {
                flag=1;

            }
            if(a==1)
            {
                maxi1=max(maxi1,x);
            }
            else if (a==2)
            {
                maxi2=max(maxi2,x);
            }
            else
            {
                arr[j]=x;
                index=j;
                j++;
            }
        }
        if(maxi1>maxi2 || flag==1)
        {
            cout<<"0"<<endl;
        }
        else
        {
            for(j=0;j<=index;j++)
            {
                if(arr[j]>=maxi1 && arr[j]<=maxi2)
                {
                    count2++;
                }
            }
            int total_numbers=((maxi2-maxi1)+1)-count2;
            cout<<total_numbers<<endl;
        }

    }
}