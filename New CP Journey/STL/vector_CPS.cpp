/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //! [L1] Class-1
    // vector<int>V;
    // vector<int>V = {1,3,5,4,8};
    // vector<int>temp;

    // temp = V ;
    // vector<int>V(10,5);
    //  int N;
    //  cin>>N;
    //  for ( int i = 0 ; i < N ;i++)
    //  {
    //      int a ;
    //      cin>>a;
    //      V.push_back(a);
    //  }
    // V.clear();
    // cout<<V.empty()<<endl;
    //  cout<<V.size()<<endl;
    // V.resize(10);
    //  for ( int i = 0 ; i < temp.size() ; i++)
    //  {
    //      cout<<temp[i]<<" ";
    //  }
    //  cout<<endl;

    // V[4] = 10 ;
    // cout<<V[4]<<endl;

    // vector<int>::iterator balu;

    // for ( balu = V.begin() ; balu != V.end() ; balu++)
    // {
    //     cout<<*balu<<" ";
    // }
    // cout<<endl;

    // for ( auto u : V )
    // {
    //     cout<<u<<" ";
    // }
    // cout<<endl;

    // vector<int> V = {
    //     5,
    //     3,
    //     4,
    //     1,
    //     2,
    //     9,
    //     8,
    //     7,
    // };
    // sort(V.begin()+3, V.begin() + 6);
    //?Non-decreasing
    //?sort(V.begin(), V.end(), greater<int>());
    //! Non-increasing
    //?sort(V.rbegin(),V.rend());
    // reverse(V.begin()+2, V.begin()+8);
    // for (auto u : V)
    //     cout << u << " ";
    // cout << V.back() << endl;
    // V.pop_back(); //!O(1)
    // cout << *V.begin() << endl; //!O(1)
    // reverse(V.begin(), V.end()); //! O(n)
    // for (auto u : V)
    //     cout << u << " ";
    // while (!V.empty())
    // {
    //     cout << V.back() << " ";
    //     V.pop_back();
    // }

    //![L1]Class-2

    vector<int> V = {2, 3, 5, 5, 7, 7, 1};
    sort(V.begin(), V.end());   //? O(nlog2(n))
    int size = unique(V.begin(), V.end()) - V.begin();   //? O(n)
    cout << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << V[i] << " ";
    }
    cout << endl;
    return 0;
}
