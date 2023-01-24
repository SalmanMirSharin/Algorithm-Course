#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
vector<int>adj_list[N];

bool dfs(int node){
    visited[node] = 1;

    for(int adj : adj_list[node]){
        if(visited[adj]==0){
             bool got_cycle = dfs(adj);
             if(got_cycle){
                return true;
             }
        }
        else if(visited[adj]==1){
            return true;
        }
    }
    visited[node] = 2;
    return false;
}


int main(){
    int n,m;
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
    }
    
    int cycle_exist = false;
    for(int i=1; i<n; i++){
        if(visited[i]==0){
            bool got_cycle = dfs(i);
            if(got_cycle){
                cycle_exist = true;
            }
        }
    }

    if(cycle_exist){
        cout<<"Cycle Exists!";
    }
    else{
        cout<<"No cycle!";
    }

return 0;
}

/*
Cycle Exist:
4 5
1 3
2 1
2 4
3 2
3 4

No cycle:
4 4
1 3
2 1
2 4
3 4

*/