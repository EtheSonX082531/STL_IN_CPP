#include<bits/stdc++.h>
using namespace std;

int main()
{
    //map_variable_name<key_datatype,value_datatype>map_name;
    // map stores unique keys in sorted order...
    map<int,int>mp;
    map<int,pair<int,int>>mp2;
    map<pair<int,int>,int>mp3;

    mp[1]=2;
    mp.emplace(3,1);
    mp.insert({2,4});

    mp3[ {2,3}]=10;

    cout<<"Printing map elements using pointer:"<<endl;
    for(auto it=mp.begin(); it!=mp.end(); it++) {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    
    // printing using the unique keys
    cout<<mp[1]<<endl;
    cout<<mp[3]<<endl;
    
    // find the address of any key in map using find()
    auto it=mp.find(3);
    cout<< (*it).second <<endl;
    
    // erase,size,empty,swap are as same as other container in stl
    return 0;
}
