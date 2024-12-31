#include<bits/stdc++.h>
using namespace std;

int main()
{
    //pair declaration and initialization
    /*pair<int,int>p;
    p=make_pair(5,6);
    cout<<p.first<<" "<<p.second<<endl;*/
    
    vector<pair<int,string>>student= {{1,"Anik Roy"},{2,"Puja Chowdhury"}};
    student.push_back(make_pair(3,"Mithila Chy"));
    student.push_back({4,"Rubaiya Haque Rumu"});
    for(int i=0; i<student.size(); i++) {
        cout<<student[i].first<<" "<<student[i].second<<endl;
    }
    
    /*student[0].first="Anik";
    student[0].second=12;
    student[1].first="Puja";
    student[1].second=10;
    cout<<student[0].first<<endl;
    cout<<student[1].first<<endl;
    cout<<student[0].second<<endl;
    cout<<student[1].second<<endl;*/
    return 0;
}
