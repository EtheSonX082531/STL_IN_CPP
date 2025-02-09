#include<iostream>
using namespace std;

int main()
{
    pair<string,int>p1;
    p1=make_pair("Anik Roy",16);
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<string,pair<string,int>>p2;
    p2.first="Anik Roy";
    p2.second=make_pair("Human",26);
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    //copying pair to another pair
    pair<string,int>p3=p1;

    auto p4=p2;
    cout<<p4.first<<" "<<p4.second.first<<" "<<p4.second.second<<endl;
    return 0;
}
