#include<bits/stdc++.h>
using namespace std;

// Using custom comparator
bool comparator(pair<int,int>p1,pair<int,int>p2) {
    if(p1.second<p2.second) {
        return true;
    }
    else if(p2.second==p1.second) {
        if(p1.first>p2.first) {
            return true;
        }
    }
    else {
        return false;
    }
}

int main()
{
    pair<int,int> arr[]= {{1,2},{2,1},{4,1}};
    sort(arr,arr+3,comparator);
    // if comparator return false then 
    // internal sorting will happen in the array
    for(int i=0; i<3; i++) {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    return 0;
}
