/*
-create a distance array "d".
-initialise all value by infinite.
-d[src] = 1;
-create a visited array and mark all node as "Unvisited".
-for i=0 and n-1
    -fick the unvisited array with minimum d[node].
    -visited[node] = 1.
    for adj_node of node:
        if d[node]+c(node,adj_node) = d[adj_node].
            d[adj_node] = d[node]+c(node,adj_node)

-output array "d".
*/


#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
const int INF = 1e9;
vector<pair<int,int>>adj[N];
int d[N];
int visited[N];
int n,m;

void dijkstra(int node){

        for(int i=1; i<=n; i++){
            d[i]=INF;
        }
        d[node]= 0;

        for(int i=0; i<n; i++){
            int select_node = -1;
            for(int j=1; j<=n; j++){
                if(visited[j]==1) continue;
                if(select_node==-1 || d[select_node]>d[j]){
                    select_node = j;
                }
            }
            visited[select_node] = 1;
            

            for(auto adj_entry : adj[select_node]){
                    int adj_node = adj_entry.first;
                    int edge_cst = adj_entry.second;

                    if(d[select_node]+edge_cst < d[adj_node]){
                        d[adj_node] = d[select_node]+edge_cst;

                    }
            }
        }


}

int main(){
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int u,v,w;cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    int src = 1;
    dijkstra(src);

    for(int i=1; i<=n; i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;

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
*/