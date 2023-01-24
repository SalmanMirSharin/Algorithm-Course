#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
vector<int>adj_list[N];
void bfs(int src){
    queue<int>q;
    visited[src] =1;
    q.push(src);

    while(!q.empty()){
        int head = q.front();
        q.pop();
        cout<<head<<endl;

        for(int adj: adj_list[head]){
            if(visited[adj]==0){
                visited[adj] = 1;
                q.push(adj);
            }
        }

    }
}

/*
6 6
0 1
1 2
2 3
2 4
1 5
5 4
*/

int main(){
    int node,edge;
    cin>>node>>edge;

    for(int i=0; i<edge; i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src =0;
    bfs(src);

return 0;
}



