#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
const long long INF = 1e18+5;
vector<pair<int,int>>adj[N];
int n,m,w;
long long d[N];
int visited[N],parent[N];


void dijkstra(int node){
        for(int i=1; i<=n; i++){
                d[i] = INF;
        }
        d[node] = 0;

        priority_queue<pair<long long,int>>pq;
        pq.push({0,node});

        while(!pq.empty()){
            pair<long long,int> head = pq.top();
            pq.pop();
            int selected_node = head.second;

            if(visited[selected_node]){
                continue;
            }

            visited[selected_node] = 1;

            for(auto ad : adj[selected_node]){
                int adj_node = ad.first;
                int edge_cst = ad.second;

                if(d[selected_node]+edge_cst < d[adj_node]){
                        parent[adj_node] = selected_node;
                        d[adj_node] = d[selected_node]+edge_cst;
                        pq.push({-d[adj_node],adj_node});
                }
            }


        }


}

int main(){
    
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w}); 
        adj[v].push_back({u,w});
    }

    int src = 1;
    dijkstra(src);

    if(visited[n]==0){
        cout<<-1<<endl;
        return 0;
    }

    int current_node = n;

    vector<int>path;

    while(true){
        path.push_back(current_node);
        if(current_node==src){
            break;
        }
        current_node = parent[current_node];
    }

    reverse(path.begin(),path.end());
    for(int node : path){
        cout<<node<<" ";
    }
    cout<<endl;

return 0;
}


/*
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1

*/