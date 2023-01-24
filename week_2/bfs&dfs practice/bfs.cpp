#include<bits/stdc++.h>
using namespace std;


int main(){
    int node,edge;
    cin>>node>>edge;
    vector<int>lst[node];
    for(int i=0; i<edge; i++){
        int u,v;
        cin>>u>>v;
        lst[u].push_back(v);
        lst[v].push_back(u);

    }


return 0;
}