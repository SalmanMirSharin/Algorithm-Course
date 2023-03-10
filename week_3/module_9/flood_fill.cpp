#include<bits/stdc++.h>
using namespace std;
const int N = 2002;
int maze[N][N],visited[N][N];
typedef pair<int,int>p;
vector<int>adj_list[N][N];
int n,m;
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};

bool is_inside(p coord){
    int x = coord.first;
    int y = coord.second;
    if(x>=0 && x<n && y>=0 && y<m){
        return true;
    }
    return false;
}

bool is_safe(p coord){
    int x = coord.first;
    int y = coord.second;
    if(maze[x][y]==-1){
        return false;
    }
    return true;
}

void bfs(p src){
        queue<p>q;
        visited[src.first][src.second]=1;
        q.push(src);
        
        while(!q.empty()){
            p head = q.front();
            q.pop();
            int x = head.first;
            int y = head.second;

            for(int i=0; i<4; i++){
                int new_x = x + dx[i];
                int new_y = y + dy[i];
                p adj_node = {new_x,new_y};

                if(is_inside(adj_node) && is_safe(adj_node) && visited[new_x][new_y]==0){
                    visited[new_x][new_y]=1;
                    q.push(adj_node);
                }
            }
            
            }
        }

p find_unvisited(){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(visited[i][j]==0 && maze[i][j]==0){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}


int main(){

    cin>>n>>m;

    for(int i=0; i<n; i++){
        string input;
        cin>>input;
        for(int j=0; j<m; j++){
            if(input[j]=='#'){
                maze[i][j]=-1;
            }
        }
    }


    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout<<maze[i][j]<<"\t";
    //     }
    //     cout<<endl;
    // }

    int room_cnt = 0;

    while(true){
        p unvisited_pos = find_unvisited();

        if(unvisited_pos==p{-1,-1}){
            break;
        }
        bfs(unvisited_pos);
        room_cnt++;
    }

    cout<<room_cnt<<endl;

return 0;
}

/*
5 8
########
#..#...#
####.#.#
#..#...#
########
*/