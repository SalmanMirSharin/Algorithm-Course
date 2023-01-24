#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int visited[N];
vector<int>adj_ls[N];

void bfs(int node){
    queue<int>q;
    visited[node] = 1;
     q.push(node);

    while(!q.empty()){
        int head = q.front();
        q.pop();
        cout<<head<<endl;

        for(int adj: adj_ls[head]){
            if(visited[adj]==0){
                visited[adj] = 1;
                q.push(adj);
            }

        }
    }
}
/*
4 3
0 1
1 2
2 3
*/

int main(){
    int node,edge;
    cin>>node>>edge;
    for(int i=0; i<edge; i++){
        int u,v;
        cin>>u>>v;
        adj_ls[u].push_back(v);

    }
    int src = 0;
    bfs(src);

return 0;
}

/*
5 4
0 1
0 2
1 3
1 4
*/


// #include<bits/stdc++.h>
// using namespace std;

/*
4 8
0 1
1 0
0 2
2 0
1 2
2 1
0 3
3 0
*/
 
// int main() {
 
//     // n = number of nodes
//     // m = number of edges
//     int n, m;
//     cin >> n >> m;
//     vector<int>adj[n];
 
//     for(int i = 0 ; i < m ; i++) { // loop over the number of edges
//         int u, v;
//         cin >> u >> v; // There exists a directed edge from u to v
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
 
//     // for(int ad : adj[n]){
//     //     cout<<ad<<endl;
//     // }

//     for(int i=0; i<n; i++){
//         cout<<i<<endl;
//         for(int j=0; adj[i].size(); j++){
//             // cout<<adj[i][j]<<" ";

//         }
//         // cout<<endl;
//     }


//     return 0;
// }





//Solve:

#include<bits/stdc++.h>
using namespace std;

bool bidrec(int i, vector<int>lst){
        for(int x : lst){
     
             if(i==x){
                    return true;
                }
        }
    return false;
}

int main(){

    int node,edge;
    cin>>node>>edge;
    vector<int>list[node];
    for(int i=0; i<edge; i++){
        int u,v;
        cin>>u>>v;
        list[u].push_back(v);

    }
    // cout<<endl;
    for(int i=0; i<node; i++){
        for(int x: list[i]){
            if(bidrec(i,list[x])==false){
                cout<<"Not Bidrectional"<<endl;
                return 0;
            }
        }
    }
    cout<<"Bidrectional"<<endl;

return 0;
}

/*
0---1
|   |
3---2

4 8
0 1
1 0
1 2
2 1
2 3
3 2
3 0
0 3


*/







