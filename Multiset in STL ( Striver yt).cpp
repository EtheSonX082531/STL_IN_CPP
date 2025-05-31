#include<bits/stdc++.h>
using namespace std;

int main()
{
    // multiset take elements as sorted form
    // it also take multiple occurrences of elements

    multiset<int>ms;
    ms.insert(1);
    ms.insert(5);
    ms.insert(2);
    ms.insert(1);
    ms.insert(7);

    for(auto i:ms) {
        cout<<i<<" ";
    }

    cout<<"\nPrinting using the pointer:"<<endl;
    for(auto it=ms.begin(); it!=ms.end(); it++) {
        cout<<*(it)<<" ";
    }

    cout<<endl;
    cout<<ms.size()<<endl;
    cout<<ms.count(1)<<endl;
    ms.erase(1);
    // all occurrences of 1 will be erased
    
    cout<<*(ms.find(7))<<endl;
    // .find() function return the address of first occurrence 
    // of that element
    
    ms.insert(0);
    ms.insert(0);
    
    ms.erase(ms.find(0));
    // it will help to erase that address of first occurrence 
    // of the element not the all occurrences will delete.
    // it is useful... 
    for(auto it=ms.begin(); it!=ms.end(); it++) {
        cout<<*(it)<<" ";
    }
    
    return 0;
}
