#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Using pair of STL"<<endl;
    pair<string,int>p;
    // two method of insert values in pair
    p=make_pair("Anik",24);
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    /*
    p.first="Anik";
    p.second=24;
    */
    
    //Inserting 3 value in pair
    pair<string,pair<int,double>>a;
    a.first="Puja";
    a.second.first=23;
    a.second.second=75.67;
    cout<<a.first<<endl;
    cout<<a.second.first<<endl;
    cout<<a.second.second<<endl;
    
    //Inserting 3 value in a pair by using different method
    pair<pair<string,int>,double>b;
    b=make_pair(make_pair("Mithila",22),60.69);
    cout<<b.first.first<<endl;
    cout<<b.first.second<<endl;
    cout<<b.second<<endl;
    return 0;
}
