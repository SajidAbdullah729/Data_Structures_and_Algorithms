#include<bits/stdc++.h>
using namespace std;
bool binary_search(int arr[],int n,int _value)
{
    sort(arr,arr+n);
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]<_value)
        {
            left=mid+1;
        }
        else if(arr[mid]>_value)
        {
            right=mid-1;
        }
        else if(arr[mid]==_value)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[]={10,50,30,40};
    int n=4;
    int x=20;
    if(binary_search(arr,n,x))cout<<"x ase"<<endl;
    else cout<<"x nai"<<endl;
    return 0;
}
