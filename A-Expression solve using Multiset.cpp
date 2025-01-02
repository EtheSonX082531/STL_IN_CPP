#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int>m;
    int a,b,c;
    cin>>a>>b>>c;
    m.insert(a+(b*c));
    m.insert(a*(b+c));
    m.insert(a*b*c);
    m.insert((a+b)*c);
    m.insert(a+b+c);
    cout<<*(m.rbegin());
    return 0;
}
