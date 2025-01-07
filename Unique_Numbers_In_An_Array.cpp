#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={10,10,50,40,30,40,55,60,40,10};
    int n=10;

    set<int> st;
    for(int i=0;i<n;i++)
    {
        st.insert(arr[i]);
    }
    cout<<"Total Unique Numbers -> "<<st.size()<<endl;
    cout<<"The numbers are -> ";
    for(set<int>::iterator it=st.begin();it!=st.end();it++)
    {
        cout<<*it<<" " ;
    }
    cout<<endl;

    return 0;
}
