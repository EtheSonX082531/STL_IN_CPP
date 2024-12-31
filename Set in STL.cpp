#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout <<"Set"<< endl;
    cout<<"1.It stores only unique elements."<<endl;
    cout<<"2.It stores values in sorted order."<<endl;
    cout<<"3.Insertion,deletion and search operations have logarithmic time."<<endl;
    cout<<"O(logn),making them fast for more use cases."<<endl;
    cout<<"4.Generally implemented Using Red-black or,AVL tree."<<endl;
    cout <<"5.We can sort it in descending order using greater<type>.\n" << endl;
    //Declaration of set
    set<int>s;
    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert(40);
    s.insert(50);
    s.insert(30);
    s.insert(20);
    //Printing values
    cout << "Printing set values using iterator:" << endl;
    for(auto it=s.begin(); it!=s.end(); it++) {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    //Auto sorting in descending order
    set<int,greater<int>>s2;
    s2.insert(30);
    s2.insert(10);
    s2.insert(20);
    s2.insert(40);
    s2.insert(50);
    cout <<"Printing value using for-each loop:"<< endl;
    for(int i:s2) {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Finding a element in Set s,finding 20:"<<endl;
    if(s.find(20)!=s.end()) {
        cout<<"Yes"<<endl;
    }
    else {
        cout <<"No"<< endl;
    }
    cout<<"Finding a element in Set s2,finding 70:"<<endl;
    //s2.count(value) will return 1 if the element is present otherwise 0.
    if(s2.count(70)) {
        cout<<"Present"<<endl;
    }
    else {
        cout<<"Absent"<<endl;
    }
    s.erase(10);
    cout<<"After erasing 10 from set s:"<<endl;
    for(int i:s) {
        cout<<i<<" ";
    }
    return 0;
}
