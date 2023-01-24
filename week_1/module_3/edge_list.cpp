#include<bits/stdc++.h>
using namespace std;

int main(){
    int node =4;
    vector<vector<int>> edge_list={
        {0,1,2},
        {1,2,4},
        {1,3,8},
        {2,3,7}
    };
    //O(E) Time and Space:
    // edge_list.push_back({0,1});
    // edge_list.push_back({1,2});
    // edge_list.push_back({1,3});
    // edge_list.push_back({2,3});

    // without weight:
    // for(int i=0; i<edge_list.size(); i++){
    //     cout<<edge_list[i][0]<<" "<<edge_list[i][1]<<endl;
    // }

    for(int i=0; i<edge_list.size(); i++){
        cout<<edge_list[i][0]<<" -- "<<edge_list[i][1]<<" | "<<edge_list[i][2]<<endl;
    }

return 0;
}