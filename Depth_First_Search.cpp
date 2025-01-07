#include<bits/stdc++.h>
using namespace std;
vector<int> graph[11];

int BORO=1e9;
int visited[11];
vector<int> reachable_nodes;

void Depth_First_Search(int _value)
{
   reachable_nodes.push_back(_value);
   visited[_value]=1;
   for(int child:graph[_value])
   {
       if(!visited[child])
       {
           Depth_First_Search(child);
       }
   }
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
    graph[8].push_back(9);
    graph[6].push_back(8);
    Depth_First_Search(1);
    for(int i=0;i<reachable_nodes.size();i++)
    {
        cout<<"From 1 to reachable nodes are "<<reachable_nodes[i]<<"\n";
    }
    cout<<"\n";

    return 0;
}
