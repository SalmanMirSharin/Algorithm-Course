#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int>adj[N];

int main(){
    int node,edge;
    cin>>node>>edge;

    for(int i=0; i<edge; i++){
        int a,b;
        cin>>a>>b;
        if(b%a==0){
            adj[a].push_back(b);
        }
    }

    for(int i=0; i<node; i++){
        cout<<i<<"->";
        for(int j : adj[i]){
            cout<<j<<" ";
        }
        cout<<endl;   
    }

return 0;
}

/*
6 5
1 2
1 5
2 3
2 4
3 6


8 7
2 4
2 3
3 5
3 6
4 2
4 7
4 8

10 8
2 4
2 6
2 8
2 10
3 6
3 9
4 8
5 10

*/