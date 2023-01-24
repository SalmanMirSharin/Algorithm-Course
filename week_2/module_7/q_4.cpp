// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5;
// bool visited[N];
// vector<int>adj[N];

// void bfs(int node){
//     queue<int>q;
//     visited[node]= 1;
//     q.push(node);
//     while(!q.empty()){
//         int head = q.front();
//         q.pop();
//         cout<<head<<endl;
//         for(auto x : adj[node]){
//             if(visited[x]==0){
//                  visited[x]=1;
//                  q.push(x);
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
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     bfs(0);

// return 0;
// }



/*
5 6
A B
A E
B E
B C
E D
C D

5 4
0 1
0 2
1 3
2 4

4 4
0 1
0 2
0 3
2 3
*/



// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e5;
// int visited[N];
// vector<char>adj_ls[N];

// void bfs(char node){
//     queue<char>q;
//     visited[node] = 1;
//      q.push(node);

//     while(!q.empty()){
//         char head = q.front();
//         q.pop();
//         cout<<head<<endl;

//         for(auto adj: adj_ls[head]){
//             if(visited[adj]==0){
//                 visited[adj] = 1;
//                 q.push(adj);
//             }
//         }
//     }
// }

// int main(){
//     int node,edge;
//     cin>>node>>edge;
//     for(char i=0; i<edge; i++){
//         char u,v;
//         cin>>u>>v;
//         adj_ls[u].push_back(v);
//         adj_ls[v].push_back(u);

//     }
//     char src = 'A';
//     bfs(src);

// return 0;
// }



/*
4 3
0 1
1 2
2 3

5 4
0 1
0 2
1 3

*/



#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int visited[N];
vector<char>adj_ls[N];

void bfs(char node,char node2){
    queue<char>q;
    visited[node] = 1;
    visited[node2] = 1;
     q.push(node);
     q.push(node2);

    while(!q.empty()){
        char head = q.front();
        q.pop();
        cout<<head<<endl;

        for(auto adj: adj_ls[head]){
            if(visited[adj]==0){
                visited[adj] = 1;
                q.push(adj);
            }
        }
    }
}

int main(){
    int node,edge;
    cin>>node>>edge;
    for(char i=0; i<edge; i++){
        char u,v;
        cin>>u>>v;
        adj_ls[u].push_back(v);
        adj_ls[v].push_back(u);

    }
    char src = 'A';
    char src2 = 'E';
    bfs(src,src2);

return 0;
}