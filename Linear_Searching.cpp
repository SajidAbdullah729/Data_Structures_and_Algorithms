#include<bits/stdc++.h>
using namespace std;
bool linear_search(int arr[],int n,int value)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==value) return true;
    }
    return false;
}

int main()
{
    int arr[]={10,50,30,40};
    int n=4;
    int x=20;
    if(linear_search(arr,n,x))cout<<"x ase"<<endl;
    else cout<<"x nai"<<endl;
    return 0;
}
