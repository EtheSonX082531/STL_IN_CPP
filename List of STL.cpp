#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>l;
    // Inserting values in the list
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_front(40);
    cout<<"Front element of list(l):"<<l.front()<<endl;
    cout<<"Back element of list(l):"<<l.back()<<endl;
    cout<<"Size of list(l):"<<l.size()<<endl;
    cout<<"List(l) is empty or not?:"<<endl;
    cout<<l.empty()<<endl;
    l.pop_back();
    //l.pop_front()
    cout<<"After applying pop_back() operation in l:"<<endl;
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    cout<<"Print all elements of list(l):"<<endl;
    for(auto it=l.begin();it!=l.end();it++){
    cout<<(*it)<<" ";
    }
    cout<<endl;
    cout<<"Print all elements of list(l) in reverse order:"<<endl;
    for(auto it=l.rbegin();it!=l.rend();it++){
    cout<<(*it)<<" ";
    }
    return 0;
}
