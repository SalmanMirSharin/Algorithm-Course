
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5;
// int visited[N];
// vector<int>adj_list[N];
//  int cnt =0;
// vector<int>ans;
// void bfs(int node,int indegree[]){
// 		queue<int>q;
// 		visited[node] = 1;

// 		if(indegree[node]==0){
// 			q.push(node);
// 		}
       
		
// 		while(!q.empty()){
// 			int head = q.front();
// 			q.pop();
//             cnt++;
// 			ans.push_back(head);

// 			for(int ad : adj_list[head]){
// 				indegree[ad]--;
// 				if(indegree[ad]==0){
// 					q.push(ad);
// 					visited[ad]=1;
                  
// 				}
// 			}
// 		}

//         // if(cnt!=n){
//         //     return true;

//         // }
//         // else{
//         //     return false;
//         // }
        

// }


// int main(){
// 	int n,m;
// 	cin>>n>>m;
// 	int indegree[n+1]={};

// 	for(int i=0; i<m; i++){
// 		int u,v;
// 		cin>>u>>v;
// 		adj_list[u].push_back(v);
// 		indegree[v]++;
// 	}

// 	for(int i=1; i<=n; i++){
// 		if(visited[i]==0){
// 		    bfs(i,indegree);
      
// 		}
// 	}

// 	// for(int i : ans){
// 	// 	cout<<i<<" ";
// 	// }
//     // cout<<endl;
//     // if(cycle==true){
//     //     cout<<"Exist cycle!";
//     // }
//     // else{
//     //     cout<<"No cycle!";
//     // }
//     // cout<<cnt<<endl;

//     if(cnt!=n){
//         cout<<"Exist cycle!"<<endl;
//     }
//     else{
//         cout<<"No cycle!"<<endl;
//     }
//     cout<<"count: "<<cnt<<endl;
//     cout<<"n: "<<n<<endl;
// return 0;
// }





#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
vector<int>adj_list[N];
 int cnt =0;
 
void bfs(int node,int indegree[]){
		queue<int>q;
		visited[node] = 1;

		if(indegree[node]==0){
			q.push(node);
		}
       
		
		while(!q.empty()){
			int head = q.front();
			q.pop();
            cnt++;

			for(int ad : adj_list[head]){
				indegree[ad]--;
				if(indegree[ad]==0){
					q.push(ad);
					visited[ad]=1;
                  
				}
			}
		}
}


int main(){
	int n,m;
	cin>>n>>m;
	int indegree[n+1]={};

	for(int i=0; i<m; i++){
		int u,v;
		cin>>u>>v;
		adj_list[u].push_back(v);
		indegree[v]++;
	}

	for(int i=1; i<=n; i++){
		if(visited[i]==0){
		    bfs(i,indegree);
      
		}
	}

    if(cnt!=n){
        cout<<"Exist cycle!"<<endl;
    }
    else{
        cout<<"No cycle!"<<endl;
    }

return 0;
}

