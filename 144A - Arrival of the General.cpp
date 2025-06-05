#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    int min=*min_element(v.begin(),v.end());
    int max=*max_element(v.begin(),v.end());

    auto min_it=find(v.rbegin(),v.rend(),min);
    int min_index=(min_it.base()-v.begin())-1;

    auto max_it=find(v.begin(),v.end(),max);
    int max_index=distance(v.begin(),max_it);

    int count;
    if(min_index>max_index) {
        count=(n-1-min_index)+max_index;
    }
    else {
        count=(n-1-min_index)+max_index-1;
    }
    cout<<count<<endl;
    return 0;
}
//https://codeforces.com/problemset/problem/144/A
