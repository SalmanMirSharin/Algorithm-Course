
/*

4 3
1 2
1 3
3 4

5 4
2 1
5 3
4 3
4 5

4 3
1 3
3 4
2 4

4 5
1 2
1 4
3 2
3 4
4 2

*/



// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5;
// int visited[N];
// vector<int>adj_list[N];

// vector<int>ans;
// void bfs(int node,int indegree[],int n){
// 		queue<int>q;
// 		visited[node] = 1;
// 		// for(int i=1; i<=n; i++){
// 		// 		if(indegree[i]==0){
// 		// 			q.push(i);
					
// 		// 		}
// 		// }

// 		if(indegree[node]==0){
// 			q.push(node);
// 		}

		
// 		while(!q.empty()){
// 			int head = q.front();
// 			q.pop();
// 			ans.push_back(head);

// 			for(int ad : adj_list[head]){
// 				indegree[ad]--;
// 				if(indegree[ad]==0){
// 					q.push(ad);
// 					visited[ad]=1;
// 				}
// 			}
// 		}

// }


// int main(){
// 	int n,m;
// 	cin>>n>>m;
// 	int indegree[n+1]={};
// 	// memset(indegree,-1,sizeof indegree);
// 	for(int i=0; i<m; i++){
// 		int u,v;
// 		cin>>u>>v;
// 		adj_list[u].push_back(v);
// 		indegree[v]++;
// 	}

// 	// for(int i=1; i<=n; i++){
// 	// 	cout<<i<<"->"<<indegree[i]<<" "<<endl;
// 	// }
// 	for(int i=1; i<=n; i++){
// 		if(visited[i]==0){
// 			bfs(i,indegree,n);
// 		}
// 	}


// 	// for(int i=0; i<10; i++){
// 	// 	// if(visited[i]!=0){
// 	// 		cout<<visited[i]<<" ";
// 	// 	// }
// 	// }

// 	for(int i : ans){
// 		cout<<i<<" ";
	
// 	}
// return 0;
// }



#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
vector<int>adj_list[N];

vector<int>ans;
void bfs(int node,int indegree[]){
		queue<int>q;
		visited[node] = 1;

		if(indegree[node]==0){
			q.push(node);
		}

		
		while(!q.empty()){
			int head = q.front();
			q.pop();
			ans.push_back(head);

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

	for(int i : ans){
		cout<<i<<" ";
	
	}
return 0;
}

