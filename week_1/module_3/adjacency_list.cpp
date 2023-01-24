// #include<bits/stdc++.h>
// using namespace std;
// /*
// So, Final Time complexity is: O(1)+O(n^2)+O(n^2) = O(n^2)
// So, Final Space complexity is: O(1)+O(n)+O(n^2)+O(1) = O(n^2)
// */
// int main(){        
//     int node = 4; //[[Time complexity: O(1)],[Space complexity: O(1)]]
//     vector<int>adj_lst[node]; //[[Time complexity: O(1)],[Space complexity: O(n)]]

//     //[[Time complexity: O(E*2)->O(E)->O(n^2)],[Space complexity: O(E*2)->O(E)->O(n^2)]]
//     adj_lst[0] ={1};
//     adj_lst[1] ={0,2,3};
//     adj_lst[2] ={1,3};
//     adj_lst[3] ={1,2};

//     //[[Time complexity: O(E*2)->O(E)->O(n^2)],[Space complexity: O(1)]]
//     for(int i=0; i<node; i++){
//         cout<<i<<"-> ";
//         for(int j=0; j<adj_lst[i].size(); j++){
//             cout<<adj_lst[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// return 0;
// }


// Adjacency list of weighted and directed:

/*
0 ->(1,2)
1 ->(2,4)
2 ->
3 ->(2,8)
3 ->(1,7)

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int node = 4;
    vector<pair<int,int>>adj_lst[node];

    adj_lst[0].push_back({1,2});
    adj_lst[1].push_back({2,4});
    adj_lst[3].push_back({2,8});
    adj_lst[3].push_back({1,7});

    // different way:
    // adj_lst[0] = {{1,2}};
    // adj_lst[1] = {{2,4}};
    // adj_lst[2] ={}
    // adj_lst[3] = {{2,8},{1,7}};


    for(int i=0; i<node; i++){
        cout<<i<<"-> ";
        for(int j=0; j<adj_lst[i].size(); j++){
            cout<<"("<<adj_lst[i][j].first<<","<<adj_lst[i][j].second<<")"<<",";
        }
        cout<<endl;
    }

return 0;
}