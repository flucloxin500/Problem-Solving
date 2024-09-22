/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /// Erase

    // vector<int> V;
    // int pos ;

    // V.push_back(10);
    // V.push_back(20);
    // V.push_back(30);
    // V.push_back(40);

    // for ( int i = 0 ; i < V.size(); i++)
    // {
    //     if ( V[i] == 30)
    //     {
    //         pos = i ;
    //     }
    //     cout<<V[i]<<" ";
    // }

    // cout<<endl;

    // V.insert(V.begin()+1,2,pos);

    // for ( int i = 0 ; i < V.size(); i++)
    // {
    //     cout<<V[i]<<" ";
    // }

    // cout<<endl;

    /// Swap

    // vector<int>V1;
    // V1.push_back(10);
    // V1.push_back(20);
    // V1.push_back(30);
    
    // vector<int> V2 ;
    // V2.push_back(1);
    // V2.push_back(2);
    // V2.push_back(3);

    // cout<<"Before Swaping"<<endl;

    // for ( int i = 0 ; i < V1.size(); i++)
    // {
    //     cout<<V1[i]<<" ";
    // }
    // cout<<endl;

    // for ( int i = 0 ; i < V2.size(); i++)
    // {
    //     cout<<V2[i]<<" ";
    // }
    // cout<<endl;

    // swap(V1,V2);

    // cout<<"After Swaping"<<endl;

    // for ( int i = 0 ; i < V1.size(); i++)
    // {
    //     cout<<V1[i]<<" ";
    // }
    // cout<<endl;

    // for ( int i = 0 ; i < V2.size(); i++)
    // {
    //     cout<<V2[i]<<" ";
    // }
    // cout<<endl;

    /// Sort()
    // vector<int>V1;
    // V1.push_back(100);
    // V1.push_back(20);
    // V1.push_back(50);
    // V1.push_back(2);
    // V1.push_back(60);

    // cout<<"Before Sorting"<<endl;

    // for ( int i = 0 ; i < V1.size(); i++)
    // {
    //     cout<<V1[i]<<" ";
    // }
    // cout<<endl;

    // sort(V1.begin(), V1.end());

    // cout<<"After Sorting"<<endl;

    // for ( int i = 0 ; i < V1.size(); i++)
    // {
    //     cout<<V1[i]<<" ";
    // }
    // cout<<endl;

    /// Reverse
    // vector<int>V1;
    // V1.push_back(100);
    // V1.push_back(20);
    // V1.push_back(50);
    // V1.push_back(2);
    // V1.push_back(60);

    // cout<<"Before Reversing"<<endl;

    // for ( int i = 0 ; i < V1.size(); i++)
    // {
    //     cout<<V1[i]<<" ";
    // }
    // cout<<endl;

    // reverse(V1.begin(), V1.end());

    // cout<<"After Reversing"<<endl;

    // for ( int i = 0 ; i < V1.size(); i++)
    // {
    //     cout<<V1[i]<<" ";
    // }
    // cout<<endl;

    /// Iteration 
    vector<int>V1;
    V1.push_back(1);
    V1.push_back(2);
    V1.push_back(3);
    V1.push_back(4);

    vector<int>::iterator it ;
    for ( it= V1.begin() ; it != V1.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
