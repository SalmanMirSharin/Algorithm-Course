#include<bits/stdc++.h>
using namespace std;

int main(){
    int node = 4; // O(1)
    int matrix[node][node] = {}; //O(n^2)

    // for(int i=0; i<node; i++){
    //     for(int j=0; j<node; j++){
    //         matrix[i][j] = 0;
    //     }
    // }

/*
0->1
1->0
2->1
1->2
2->3
3->2
3->1
1->3

Time complexity = O(n^2)
Space complexity = O(n^2)
*/      
        //O(E^2) For worst case:
        matrix[0][1] = 1; //O(1)
        matrix[1][0] = 1;
        matrix[1][2] = 1;
        matrix[2][1] = 1;
        matrix[2][3] = 1;
        matrix[3][2] = 1;
        matrix[3][1] = 1;
        matrix[1][3] = 1;
    //O(n^2)
    for(int i=0; i<node; i++){
        for(int j=0; j<node; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}