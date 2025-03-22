#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v; //Creating a vector
    v.push_back(1); //Pushing a value in the end
    v.push_back(2);
    v.push_back(7);
    v.push_back(3);

    for(auto value:v) cout<<value<<" ";cout<<endl; // Output: 1 2 7 3
    v.pop_back();//erase from back
    for(auto value:v) cout<<value<<" ";cout<<endl; // Output: 1 2 7
    set<int> st; //Creating a Set
    st.insert(2); //Inserting a value in the end
    st.insert(3);
    st.insert(1);
    st.insert(7);
    for(auto value:st) cout<<value<<" ";cout<<endl;//Output : 1 2 3 7 
    st.erase(st.find(2)); //erase a set element with find the location of the value;
    for(auto value:st) cout<<value<<" ";cout<<endl;//Output : 1 3 7 
    map<int,int> mm; //Creating a new map
    mm[2]=1;
    mm[3]=2;
    mm[4]=3;
    mm[5]=5;
    cout<<mm[2]<<endl;//Output: 1


    return 0;
}
