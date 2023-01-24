// #include<bits/stdc++.h>
// using namespace std;


// int main(){

// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

//     int node, edge;
//     cin>>node>>edge;
//     vector<int>adj[node+1];

//     for(int i=0; i<edge; i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         // adj[v].push_back(u);
//     }

//     for(int i=0; i<node; i++){
//         cout<<i<<"->";
//         for(int ad: adj[i]){
//             cout<<ad<<" ";
//         }
//         puts(" ");
//     }

// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int node;
//     cin>>node;
//     int matrix[node][node] = {};
    
//     for(int i=0; i<node; i++){
//             int roin,clin;
//             cin>>roin>>clin;
//             matrix[roin][clin]=1;
//     }


//     // matrix[0][1] = 1;
//     // matrix[1][0] = 1;
//     // matrix[2][3] = 1;
//     // matrix[3][2] = 1;
//     vector<int>row;
//     vector<int>col;


//     for(int i=0; i<node; i++){
//         for(int j=0; j<node; j++){
//             // cout<<matrix[i][j]<<" ";
//             if(matrix[i][j]==1){
//                 // row.push_back(i);
//                 // col.push_back(j);
//                 cout<<i<<j;
                
      
//             }
        
//         }
//         cout<<endl;
//     }
//     // int flag = 1;
//     // for(int i : row){
//     //    for(int j: col){
//     //     if (i!=j){
//     //         flag = 0;
//     //     }
//     //    }
//     // }

//     // if(flag==1){
//     //     cout<<"directed";
//     // }

// return 0;
// }

#include<bits/stdc++.h>
using namespace std;

bool bidrec(int i, vector<int>lst){
        for(int x : lst){
     
             if(0==x){
                    return true;
                }
        }
    return false;
}

int main(){

    freopen("input.txt","r",stdin);
    // input for adjacency list:
    int node,edge;
    cin>>node>>edge;
    vector<int>list[node];
    for(int i=0; i<edge; i++){
        int u,v;
        cin>>u>>v;
        list[u].push_back(v);

    }
    cout<<endl;
    for(int i=0; i<node; i++){
        for(int x: list[i]){
            if(bidrec(i,list[x])==false){
                cout<<"Not_bidrectional";
                return 0;
            }
    
        }
        cout<<endl;
    }
    cout<<"bidrectional";

return 0;
}

/*
0---1
|   |
3---2

4 7
0 1
1 0
1 2
2 1
2 3
3 2
3 0
0 3

*/

