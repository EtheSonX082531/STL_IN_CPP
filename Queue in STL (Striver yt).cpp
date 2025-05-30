#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>qu;
    // push operation in Queue
    // Queue = FIFO (First In First Out)
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.emplace(4);
    
    // other functions for Queue
    cout<<qu.size()<<endl;
    cout<<qu.empty()<<endl;
    cout<<qu.front()<<endl;
    cout<<qu.back()<<endl;
    qu.pop();
    cout<<qu.front()<<endl;
    qu.back()=5;
    cout<<qu.back()<<endl;
    return 0;
}
