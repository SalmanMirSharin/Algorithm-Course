#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
const int INF = 1e9;
vector<pair<int,int>>adj[N];
vector<int>dis(N,INF);

void dijkstra(int src){
    
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;    
    pq.push({0,src});
    dis[src] = 0;

    while(!pq.empty()){
        int ds = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for(auto ad : adj[node]){
            int vertec = ad.first;
            int weight = ad.second;
            if(dis[node]+weight<dis[vertec]){
                dis[vertec] = dis[node] + weight;
                pq.push(make_pair(dis[vertec],vertec));
            }
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[u].push_back({u,w});
    }
    dijkstra(0);
    for(int i=0; i<n; i++){
        cout<<i<<" "<<dis[i]<<endl;
    }

    // for(int i=1; i<=n; i++){
    //     cout<<i<<" "<<dis[i]<<endl;
    // }

return 0;
}


/*
6 7
1 3 4
1 2 4
2 3 2
3 5 3
3 6 1
5 4 2
6 4 3


9 14
0 1 4
0 7 8
1 7 11
1 2 8
7 8 7
7 6 1
2 3 7
2 8 2
8 6 6
2 5 4
6 5 2
3 5 14
3 4 9
5 4 10


*/
