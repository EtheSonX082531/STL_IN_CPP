#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;


    // vector pair
    vector<pair<int,int>>v2;
    v2.push_back({1,2});
    v2.emplace_back(3,4);
    cout<<v2[0].first<<" "<<v2[0].second<<endl;
    cout<<v2[1].first<<" "<<v2[1].second<<endl;

    // copying one vector to another
    // vector<int>copy_v(v);
    vector<int>copy_v;
    copy_v=v;
    cout<<copy_v[0]<<" "<<copy_v[1]<<" "<<copy_v[2]<<endl;
    
    // using iterator in vector
    auto it=v.begin();
    while(it!=v.end()){
    cout<< *(it) <<" ";
    it++;
    }
    cout<<endl;
    
    
    return 0;
}
