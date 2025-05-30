#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack <int> st;
    // Stack = LIFO (Last In First Out)
    // push operation in Stack
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    // last element that inserted will come
    cout<<st.top()<<endl;

    // delete the last inserted element
    st.pop();
    cout << st.top() << endl;

    // some other Stack function
    cout<< st.size() <<endl;
    cout<< st.empty() <<endl;
    
    
    // printing all elements of Stack
    while(st.size()!=0) {
        cout<<st.top()<<endl;
        st.pop();
    }
    
    
    return 0;
}
