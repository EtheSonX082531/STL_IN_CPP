#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Using built in permutation function 
    // and printing all the unique arrangement of
    // a String... 
    string s="213";
    // You have to sort it firstly for
    // printing all the permutations 
    // so we use sort(start,end) function 
    // NB: sort(start,end) can sort a string also🙂
    sort(s.begin(),s.end());
    do {
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(),s.end()));
    
    // Find max and min elements from an array 
    // using built in function 
    
    int arr[]={10,4,5,9,1};
    // max_element will give you the max element
    // address... by using star(*) u are fetching the
    // value of that address... 
    int max= *max_element(arr,arr+5);
    cout<<"Max: "<<max<<endl;
    int* min= min_element(arr,arr+5);
    cout<<"Min: "<<*min<<endl;
    return 0;
}  
