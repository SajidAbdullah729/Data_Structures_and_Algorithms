#include<bits/stdc++.h>
using namespace std;
vector<int> primes;
void prime_number_generation(int n)
{
    //primes.push_back(2);
    vector<bool> prime(n+1,1);
    for(int i=2;i<=n;i++)
    {
        if(prime[i])
        {
            for(int j=2*i;j<=n;j+=i)
            {
                prime[j]=0;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i]) primes.push_back(i);
    }
}

int main()
{
    int n=100;
    prime_number_generation(n);
    cout<<"All Primes are below upto "<<n<<"\n";
    for(int i=0;i<primes.size();i++)
    {
        cout<<primes[i]<<"\n";
    }
    return 0;
}
