// #include <cstring>
// #include <iostream>
// #include <list>
// #include <queue>
// #include <vector>
// using namespace std;
// class Graph
// {
// public:
//     vector<int> *adj;
//     int *visited;
//     int n, e;
//     Graph(int n);
//     void input();
//     void print();
//     void BFS(int source);
//     void DFS(int source);
// };
// Graph::Graph(int n)
// {
//     this->n = n;
//     this->adj = new vector<int>[n + 1];
//     this->visited = new int[n + 1];
//     memset(visited, 0, sizeof(this->visited) + 1);
// }
// void Graph::input()
// {
//     cin >> this->e;
//     for (int i = 0; i < e; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         this->adj[v].push_back(u);
//         this->adj[u].push_back(v);
//     }
// }
// void Graph::print()
// {
//     for (int i = 0; i <= n; i++)
//     {
//         cout << i << " -> ";
//         for (int val : adj[i])
//             cout << val << " ";
//         cout << endl;
//     }
//     cout << endl;
// }
// void Graph::BFS(int source)
// {
 
//     queue<int> q;
//     this->visited[source] = 1;
//     q.push(source);
//     // cout << "BFS :";
//     while (!q.empty())
//     {
//         int font = q.front();
//         q.pop();
//         // cout << " " << font;
//         for (int val : adj[font])
//         {
//             if (this->visited[val] != 1)
//             {
//                 this->visited[val] = 1;
//                 q.push(val);
//             };
//         }
//     }
//     // cout << endl;
// }
// void Graph::DFS(int source)
// {
//     cout << source << " ";
//     this->visited[source] = 1;
//     for (int val : this->adj[source])
//     {
//         if (visited[val] != 1)
//             DFS(val);
//     }
// }
// int main()
// {
 
//     // freopen("input.txt", "r", stdin); // input from input.txt file
//     int n;
//     cin >> n;
//     Graph g = Graph(n);
//     g.input();
//     // g.print();
//     // g.BFS(1);
 
//     int count = 0;
//     g.BFS(1);
//     vector<pair<int, int>> newRoad;
//     int x = 1;
//     for (int i = 2; i < n + 1; i++)
//     {
//         if (!g.visited[i])
//         {
//             g.BFS(i);
//             newRoad.push_back({x, i});
//         }
//         x = i;
//     }
 
//     cout << newRoad.size() << endl;
//     for (pair<int, int> road : newRoad)
//     {
//         cout << road.first << " " << road.second << endl;
//     }
 
//     // cout << "DFS : ";
//     // g.DFS(1);
//     // g.BFS(1);
 
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// #define MAXN 202020

// int n, m;
// vector<vector<int>>adj(MAXN);
// vector<bool>visited(MAXN, false);
// vector<int>bridges;

// void DFS (int node) {
//   visited[node] = true;
//   for (auto child : adj[node]) {
//     if (visited[child] == false) {
//       DFS(child);
//     }
//   }
// }

// int main() {
//     cin >> n >> m;
//     for (int i = 0 ; i < m; i++) {
//       int node1, node2;
//       cin >> node1 >> node2;
//       adj[node1].push_back(node2);
//       adj[node2].push_back(node1);
//     }
//     // int cnt =0;
//     // queue<int>b;
//     for (int i = 1; i <= n; i++) {
//       if (visited[i] == false) {
//         bridges.push_back(i);
//         // b.push(i);
//         // cout<<i<<" ";
//         // cnt++;
//         DFS(i);
//       }
//     }
//     // cout<<cnt-1<<endl;

//     // while(!b.empty()){
//     //     cout<<b.front()<<" ";
//     //     b.pop();
//     // }

//     cout << bridges.size() - 1 << endl;
//     for (int i = 0; i < bridges.size() - 1; i++) {
//       cout << bridges[i] << " " << bridges[i + 1] << endl;
//     }
//     return 0;
// }


/*
8 6
1 2
2 3
4 5
6 7
6 8
7 8

*/



#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
vector<int>adj[N];
bool visited[N];

void dfs(int node) {
  visited[node] = true;
  for (auto ad : adj[node]) {
    if (visited[ad] == false) {
      dfs(ad);
    }
  }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0 ; i < m; i++) {
      int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
    vector<int>b;
    for (int i = 1; i <= n; i++) {
      if (visited[i] == false) {
        b.push_back(i);
        dfs(i);
      }
    }
    
    int k = b.size()-1;
    cout<<k<<endl;

    for(int i=0; i<b.size()-1; i++){
          cout<<b[i]<<" "<<b[i+1]<<endl;
    }

    return 0;
}
