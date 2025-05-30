#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int>pq;
    // Priority_queue means the max element will be in top
    // It stores data in descending order 
    pq.emplace(2);
    pq.emplace(10);
    pq.emplace(5);
    pq.emplace(7);
    
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    
    
    // This will store data from small to big
    // top most element will be the smallest element here
    priority_queue<int,vector<int>,greater<int>>pq2;
    pq2.push(8);
    pq2.push(89);
    pq2.push(56);
    cout<<pq2.top()<<endl;
    
    cout<<pq2.size()<<endl;
    cout<<pq2.empty()<<endl;
    return 0;
}
