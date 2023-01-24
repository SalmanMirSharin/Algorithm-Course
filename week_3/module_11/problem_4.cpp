
/*
bool detect_cycle(int node) {
	- mark visited[node] as 1
 
	- for all adj_node of adj_list[node]:
 
		Case-1: “node” is the parent of “adj_node”:
			- ignore
 
		Case-2: visited[adj_node] is 0:
			- mark "node" as the parent of "adj_node"
			// Same as directed graph
 
		Case-3: visited[adj_node] is 1:
			// Same as directed graph
 
		Case-4: visited[adj_node] is 2:
			// Same as directed graph
 
 
	- mark visited[node] as 2
	- return true
}
 
*/



// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5;
// bool visited[N];
// vector<int>parent;
// vector<int>adj_list[N];

// bool dfs(int node,vector<int>adj_list[],bool visited[],int parent){
//     visited[node] = true;

//     for(int adj : adj_list[node]){
//          if(!visited[adj]){
//             //  bool got_cycle = dfs(adj);
//              if(dfs(adj,adj_list,visited,node)){
//                 return true;
//              }
//         }
//         else if(parent!=adj){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//       int n,m;
//     cin>>n>>m;

//     for(int i=0; i<m; i++){
//         int u,v;
//         cin>>u>>v;
//         adj_list[u].push_back(v);
//         adj_list[v].push_back(u);
//     }
    
//     int cycle_exist = false;
//     for(int i=0; i<n; i++){
//         if(visited[i]==0){
//             // bool got_cycle = dfs(i,-1);
//             if(dfs(i,adj_list,visited,-1)){
//                 cycle_exist = true;
//                 // return true;
//             }
//         }
//         // return false;
//     }

//     if(cycle_exist){
//         cout<<"Cycle Exists!";
//     }
//     else{
//         cout<<"No cycle!";
//     }

// return 0;
// }


/*
4 4
0 1
1 3
1 2
2 3

4 3
0 1
1 3
1 2

5 5
1 2
2 3
2 5
3 4
4 5

5 4
1 2
2 3
2 5
3 4



*/



#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
bool visited[N];
vector<int>adj_list[N];

bool dfs(int node,int parent){
    visited[node] = true;

    for(int adj : adj_list[node]){
         if(!visited[adj]){
             if(dfs(adj,node)){
                return true;
             }
        }
        else if(parent!=adj){
            return true;
        }
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
            if(dfs(i,-1)){
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
