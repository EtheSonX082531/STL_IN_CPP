#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int>p= {1,2};
    cout<<p.first<<" "<<p.second<<endl;

    //nested pair
    pair<int,pair<int,int>>q= {1,{2,3}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;

    //pair array
    pair<int,int> arr[]= { {1,2},{2,3},{6,9} };
    for(int i=0; i<3; i++) {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    
    return 0;
}
