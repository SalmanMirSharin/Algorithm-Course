// Solve:

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
vector<int>adj[N];

void dfs(int node){
    stack<int>st;
    st.push(node);
    while(!st.empty()){
        int head = st.top();
        st.pop();

        if(visited[head]==0){
            cout<<head<<endl;
            visited[head] = 1;
        }

        for(int x : adj[head]){
            if(visited[x]==0){
                st.push(x);
            }
        }
    }
}

int main(){
    int node,edge;
    cin>>node>>edge;
    for(int i=0; i<node; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    dfs(0);
return 0;
}


/*
4 5
0 1
0 2
1 3
1 2
2 3

5 6
0 1
0 2
1 4
2 3
2 2
1 4

*/

