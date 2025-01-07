#include<bits/stdc++.h>
using namespace std;
vector<int> graph[11];

int BORO=1e9;
vector<int> Breadth_First_Search(int source,int n)
{
    queue<int> q;
    vector<int> distance(n+1,BORO);
    q.push(source);
    distance[source]=0;
    while(!q.empty())
    {
        int upore=q.front();
        q.pop();
        for(int child:graph[upore])
        {
            if(distance[child]==1e9)
            {
                distance[child]=distance[upore]+1;
                q.push(child);
            }
        }
    }
    return distance;
}
int main()
{
    int n=10;
    graph[1].push_back(2);
    graph[2].push_back(3);
    graph[3].push_back(4);
    graph[1].push_back(3);
    graph[4].push_back(5);
    graph[5].push_back(6);
    graph[6].push_back(7);
    graph[9].push_back(8);
    graph[7].push_back(9);
    graph[8].push_back(10);
    graph[6].push_back(8);
    vector<int> distance=Breadth_First_Search(1,n);
    for(int i=1;i<=n;i++)
    {
        cout<<"shortest distance from source 1 to "<<" node "<<i<<" is -> "<<distance[i]<<"\n";
    }
    cout<<"\n";

    return 0;
}
