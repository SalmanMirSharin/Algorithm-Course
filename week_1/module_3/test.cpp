#include<bits/stdc++.h>
using namespace std;

int main(){
    int node = 4;
    vector<int> ad_lst[node];

    ad_lst[0] = {1};
    ad_lst[1] = {0,2,3};
    ad_lst[2] = {1,3};
    ad_lst[3] = {1,2};

    // for(int i=0; i<node; i++){
    //     cout<<i<<"-> ";
    //     for(int j=0; j<ad_lst[i].size(); j++){
    //         cout<<ad_lst[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int i=0; i<node; i++){
        cout<<&ad_lst[i]<<endl;
}

return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int node = 4;
//     vector<int> v;

//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
 
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
// }

// return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int node = 4;
//     int ar[node][2] ={{1,2},{3,4},{5,6},{7,8}};

    // for(int i=0; i<node; i++){
    //     for(int j=0; j<2; j++){
    //         cout<<ar[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

        // for(int i=0; i<node; i++){
        //         printf("%d \n",ar[i]);
        // }


    // int arr[node] = {1,2,3,4};

    // printf("%",arr[1]);
    // cout<<&arr;

// return 0;
// }