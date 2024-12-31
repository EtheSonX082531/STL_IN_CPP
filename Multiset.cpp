#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Concept of Multi Set" << endl;
    cout<<"Multiset take all values(without being uniqe)and sort them."<<endl;
    multiset<int>s;
    s.insert(10);
    s.insert(50);
    s.insert(10);
    s.insert(30);
    s.insert(10);
    for(int i:s) {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"After erasing 10 from multiset s:"<<endl;
    s.erase(10);
    for(int i:s) {
        cout<<i<<" ";
    }
    return 0;
}
