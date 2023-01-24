// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5;
// int visited[N];

// vector<int>adj_list[N];
// void bfs(int src){
//     queue<int>q;
//     visited[src]= 1;
//     q.push(src);

//     while(!q.empty()){
//         int head = q.front();
//         q.pop();
//         cout<<head<<" ";

//         for(int adj : adj_list[head]){
//                 if(visited[adj]==0){
//                 visited[adj] = 1;
//                 q.push(adj);
//             }
//         }

//     }
// }

// int main(){
//     int node,edge;
//     cin>>node>>edge;

//     for(int i=0; i<edge; i++){
//         int u,v;
//         cin>>u>>v;
//         adj_list[u].push_back(v);
//         adj_list[v].push_back(u);
        
//     }
//     bfs(0);


// return 0;
// }


/*

4 3
0 1
1 2
1 3

*/



#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
int level[N];

vector<int>adj_list[N];
void bfs(int src){
    queue<int>q;
    visited[src]= 1;
    level[src] = 0;
    q.push(src);

    while(!q.empty()){
        int head = q.front();
        q.pop();

        for(int adj : adj_list[head]){
                if(visited[adj]==0){
                visited[adj] = 1;
                level[adj] = level[head]+1;
                q.push(adj);
            }
        }

    }
}

int main(){
    int node,edge;
    cin>>node>>edge;

    for(int i=0; i<edge; i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
        
    }
    bfs(0);
    for(int i=0; i<node; i++){
        cout<<i<<"->"<<level[i]<<endl;
    }

    
return 0;
}