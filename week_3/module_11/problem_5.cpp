#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
vector<int>adj_list[N];

bool bfs(int node){
        queue<int>q;
        visited[node] = 1;
        q.push(node);

        while(!q.empty()){
                int head = q.front();
                q.pop();
            for(int adj : adj_list[head]){
                if(visited[adj]==1){
                    return true;
                }
                if(visited[adj]==0){
                    visited[adj] = 1;
                    q.push(adj);
                }

            }
            visited[head] = 2;
        }
    return false;
}



int main(){
      int n,m;
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    
    int cycle_exist = false;
    for(int i=1; i<=n; i++){
        if(visited[i]==0){
            if(bfs(i)){
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
5 6 
1 2
1 3
2 5
2 3
3 4
4 5

4 3
1 2
2 4
2 3

4 4
1 2
2 4
2 3
3 4

*/