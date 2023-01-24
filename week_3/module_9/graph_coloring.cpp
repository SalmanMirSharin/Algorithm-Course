// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5;
// int visited[N];
// vector<int>adj_list[N];

// void bfs(int node){
//     queue<int>q;
//     visited[node] = 1;
//     q.push(node);

//     while(!q.empty()){
//         int head = q.front();
//         q.pop();
//         cout<<head<<endl;
//         for(int ad : adj_list[head]){
//             if(visited[ad]==0){
//                 visited[ad] = 1;
//                 q.push(ad);
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

//     int src =1;
//     bfs(src);

// }

/*
4 4
1 2
1 3
3 4
4 1
*/




#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
int color[N];
vector<int>adj_list[N];


bool dfs(int node){

    visited[node] = 1;

    for(int ad : adj_list[node]){
        if(visited[ad]==0){
            // assign different color to adj_node
            if(color[node]==1){
                color[ad] = 2;
            }
            else{
                color[ad] = 1;
            }
          bool is_bicolorable = dfs(ad);
        //   if(!is_bicolorable){
        //     return false;
        //   }
        }
        else{
            //check it is same or not
            if(color[node]== color[ad]){
                return false;
            }

        }
    }
    return true;
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
    bool is_bicolorable = true;
    for(int i=1; i<=node; i++){
        if(visited[i]==0){
            color[i]=1;
           bool ok = dfs(i);
           if(!ok){
            is_bicolorable = false;
            break;
           }
        }
    }
    if(!is_bicolorable){
        cout<<"Impossible";
    }
    else{
        for(int i=1; i<=node; i++){
            cout<<color[i]<<" ";
        }
        cout<<endl;
    }

return 0;
}

/*
For correct:
5 3
1 2
1 3
4 5

For impossible:
5 4
1 2
1 3
2 3
4 5
*/





/*
4 4
1 2
1 3
3 4
4 1
*/
