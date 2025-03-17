#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(7);
    v.push_back(3);

    for(auto value:v) cout<<value<<" ";cout<<endl;
    v.pop_back();//erase from back
    set<int> st;
    st.insert(2);
    st.insert(3);
    st.insert(1);
    st.insert(7);
    for(auto value:st) cout<<value<<" ";cout<<endl;
    st.erase(st.find(2)); //erase a set element with find the location of the value;
    map<int,int> mm;
    mm[2]=1;
    mm[3]=2;
    mm[4]=3;
    mm[5]=5;
    cout<<mm[2]<<endl;


    return 0;
}
