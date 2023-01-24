// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5;
// int visited[N];
// vector<int>lst[N];

// // void bfs(int node){
// //     queue<int>q;
// //     visited[node] = 1;
// //     q.push(node);

// //     while(!q.empty()){
// //         int head = q.front();
// //         q.pop();
// //         // cout<<head<<endl;
// //         for(int ad : lst[head]){
// //             if(visited[ad]==0){
// //                 visited[ad] = 1;
// //                 q.push(ad);
// //             }
// //         }
// //     }

// // }

// void dfs(int node){
//     // cout<<node;
//     visited[node] = 1;
//     for(int ad : lst[node]){
//         if(visited[ad]==0){
//             visited[ad] = 1;
//             dfs(ad);
//         }
//     }
// }


// /*
// 5 4
// 1 2
// 1 3
// 2 3
// 4 5

// */

// int main(){
//     int node,edge;
//     cin>>node>>edge;

//     for(int i=0; i<edge; i++){
//         int u,v;
//         cin>>u>>v;
//         lst[u].push_back(v);
//         lst[v].push_back(u);

//     }
//     int count=0;
//     for(int i=1; i<node; i++){
//         if(visited[i]==false){
//             dfs(i);
//             count++;
            
//         }
        
 
//     }
//     cout<<count;

// return 0;
// }



#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
vector<int>lst[N];

void dfs(int node){
    visited[node] = 1;
    for(int ad : lst[node]){
        if(visited[ad]==0){
            visited[ad] = 1;
            dfs(ad);
        }
    }
}
int main(){
    int node,edge;
    cin>>node>>edge;
    for(int i=0; i<edge; i++){
        int u,v;
        cin>>u>>v;
        lst[u].push_back(v);
        lst[v].push_back(u);

    }
    int count=0;
    for(int i=1; i<node; i++){
        if(visited[i]==false){
            dfs(i);
            count++;           
        }
    }
    cout<<count;

return 0;
}


/*
5 4
1 2
1 3
2 3
4 5

*/