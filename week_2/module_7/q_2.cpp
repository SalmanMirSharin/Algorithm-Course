// Solve:
#include <bits/stdc++.h>
using namespace std;

bool bidrec(int i, vector<int> lst)
{
    for (int x : lst)
    {

        if (i == x)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    // freopen("input.txt","r",stdin);
    int node, edge;
    cin >> node >> edge;
    vector<int> list[edge];
    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        list[u].push_back(v);
    }
    cout << endl;
    int count = 0;
    for (int i = 0; i < node; i++)
    {
        for (int x : list[i])
        {
            if (bidrec(i, list[x]) == false)
            {
                count++;
            }
        }
    }
    cout << count;

    return 0;
}

/*
4 5
1 2
2 1
2 3
3 4
1 4

1---2
    |
4---3

*/
