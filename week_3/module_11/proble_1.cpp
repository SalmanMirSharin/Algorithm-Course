
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
vector<int>adj_list[N];
int level[N];

void dfs(int node){
    stack<int>st;
    st.push(node);
    while(!st.empty()){
        int head = st.top();
        st.pop();

        if(visited[head]==0){
            visited[head] = 1;
            level[node] = 0;
            
        }

        for(int x : adj_list[head]){
            if(visited[x]==0){
                level[x] = level[head]+1;
                st.push(x);
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
    int src;
    cin>>src;
    dfs(src);
    for(int i=0; i<node; i++){
        cout<<i<<"->"<<level[i]<<endl;
    }
    
return 0;
}


/*
4 3
1 0
1 2
1 3
0


6 6
0 1
2 3
1 5
1 2
2 4
5 4


6 5
0 1
2 3
1 5
1 2
2 4
0


*/