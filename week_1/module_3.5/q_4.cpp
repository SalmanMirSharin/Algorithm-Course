//Adjacency Matrix:
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int node =4;
//     int matrix[node][node] = {};

//     matrix[0][1] = 1;
//     matrix[1][0] = 1;
//     matrix[1][3] = 1;
//     matrix[3][1] = 1;
//     matrix[0][2] = 1;
//     matrix[2][0] = 1;
//     matrix[2][3] = 1;
//     matrix[3][2] = 1;

//     for(int i=0; i<node; i++){
//         for(int j=0; j<node; j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// return 0;
// }



//Adjacency List:
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int node = 4;
//     vector<int>ad_list[node];

//     ad_list[0] = {1};
//     ad_list[1] = {0};

//     for(int i=0; i<node; i++){
//         cout<<i<<"-> ";
//         for(int j=0; j<ad_list[i].size(); j++){
//             cout<<ad_list[i][j]<<" ";
//         }
//         cout<<endl;
//     }


// return 0;
// }




//Adjacency Matrix to list:
#include<bits/stdc++.h>
using namespace std;

int main(){
    int node =4;
    vector<int>list[node];
    int matrix[node][node] = {};

    matrix[0][1] = 1;
    matrix[1][0] = 1;
    matrix[1][3] = 1;
    matrix[3][1] = 1;
    matrix[0][2] = 1;
    matrix[2][0] = 1;
    matrix[2][3] = 1;
    matrix[3][2] = 1;

    for(int i=0; i<node; i++){
        for(int j=0; j<node; j++){
            if (matrix[i][j]==1){
                    list[i].push_back(j);
            }
        }
    }

    for(int i=0; i<node; i++){
        printf("%d-> ",i);
        for(int j=0; j<list[i].size(); j++){
            cout<<list[i][j]<<" ";
        }
        puts("");
    }

return 0;
}