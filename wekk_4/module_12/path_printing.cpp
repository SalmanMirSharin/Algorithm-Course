// #include<bits/stdc++.h>
// using namespace std;
// #define val 1e5
// vector<vector<int>>adj(val);
// vector<int>visited(val);
// vector<int>v;
// void bfs(int node){
//     queue<int>q;
//     q.push(node);
//     visited[node]=1;
//     // v.push_back(node);
//     while(!q.empty()){
//         int head = q.front();
//         q.pop();
//         // cout<<head<<" ";

//         for(auto ad : adj[head]){
//             if(visited[ad]==0){
               
//                 visited[ad]=1;
//                 v.push_back(head); 
//                 q.push(ad);
//             }
//         }
//     }


// }

// int main(){
//     int n,m;
//     cin>>n>>m;
//  for(int i=0; i<m; i++){
//     int u,v;
//     cin>>u>>v;
//     adj[u].push_back(v);
//     adj[v].push_back(u);
//  }

//     for(int i=1; i<=n; i++){
//         if(visited[i]==0){
//             bfs(i);
//         }
//     }

//     // v.push_back();
//     int cnt=0;
//     vector<int>stor;
//     // cout<<v.size()<<endl;
//     auto it = unique(v.begin(),v.end());

//     // for(auto i : it){
//     //     cout<<i<<" ";
//     // }
//     v.resize(distance(v.begin(), it));
//     for (it = v.begin(); it!=v.end(); ++it){
//             cnt++;
//     // cout <<*it<<" ";
//     stor.push_back(*it);
// }

// cout<<cnt<<endl;
// for(auto i : stor){
//     cout<<i<<" ";
// }
    
// return 0;
// }

/*
4 4
1 2
1 3
2 4
3 2

6 5
1 2
2 3
2 4
4 5
5 6

5 5
1 2
1 3
1 4
2 3
5 4

*/


#include<bits/stdc++.h>
using namespace std;
#define val 1e7
vector<vector<int>>adj(val);
vector<int>visited(val);
vector<int>v;
void bfs(int node){
    queue<int>q;
    q.push(node);
    visited[node]=1;
    while(!q.empty()){
        int head = q.front();
        q.pop();

        for(auto ad : adj[head]){
            if(visited[ad]==0){
               
                visited[ad]=1;
                v.push_back(head); 
                q.push(ad);
            }
        }
    }


}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int src = 1;
    bfs(src);

    int dest_node = n;
    if(visited[dest_node]==0){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    v.push_back(n);
    int cnt=0;
    vector<int>stor;
    auto it = unique(v.begin(),v.end());

    v.resize(distance(v.begin(), it));
    for (it = v.begin(); it!=v.end(); ++it){
            cnt++;
            stor.push_back(*it);
    }

    cout<<cnt<<endl;
    for(auto i : stor){
        cout<<i<<" ";
    }
    cout<<"\n";
return 0;
}






// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5+5;
// vector<int>adj[N];
// int visited[N], level[N];
// int parent[N];

// void bfs(int src){
//     visited[src] = 1;
//     level[src] = 1;
//     queue<int>q;
//     q.push(src);

//     while(!q.empty()){
//         int head = q.front();
//         q.pop();

//         for(int ad : adj[head]){
//             if(visited[ad]==0){
//                 visited[ad] = 1;
//                 level[ad] = level[head]+1;
//                 q.push(ad);
//                 parent[ad] = head;
//             }
//         }
//     }
// }

// int main(){
//     int n,m;
//     cin>>n>>m;
//     for(int i=0; i<m; i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     int src = 1;
//     bfs(src);
//     int dest_node = n;

//     if(visited[dest_node]==0){
//         cout<<"IMPOSSIBLE";
//        return 0;
//     }   
//     cout<<level[dest_node]<<endl;

//     vector<int>path;
//     int selected_node = dest_node;

//     while(true){
//         path.push_back(selected_node);
//         if(selected_node==src){
//             break;
//         }
//         selected_node = parent[selected_node];
//     }

//     reverse(path.begin(),path.end());

//     for(int node : path){
//         cout<<node<<" ";
//     }
//     cout<<"\n";

// return 0;
// }

