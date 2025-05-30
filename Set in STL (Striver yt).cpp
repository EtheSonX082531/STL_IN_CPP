#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;

    // Set used to store unique and sorted values

    s.insert(1);
    s.insert(6);
    s.insert(1);
    s.insert(9);
    s.emplace(5);

    for(auto it=s.begin(); it!=s.end(); it++) {
        cout<<*(it)<<" ";
    }
    
    cout<<endl;
    cout<<s.size()<<endl;
    cout << s.empty() << endl;
    
    auto it=s.find(9);
    cout<<*(it)<<endl;
    
    s.erase(9);
    
    int count=s.count(1);
    // if element is exist it will give you 1
    // or it will give you 0 cz no such element exist 
    
    return 0;
}
