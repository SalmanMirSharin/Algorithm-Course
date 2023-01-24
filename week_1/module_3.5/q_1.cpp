#include <bits/stdc++.h>
using namespace std;
/*
Final Time complexity is: O(n+m)
Final Space complexity is: O(n*m)
*/

int main()
{
    int N = 4, M = 5; //[[Time: O(1)],[Space: O(1)]]
    int a = 0, b = 0; //[[Time: O(1)],[Space: O(1)]]

    int matrix[N][M]; //[[Time: O(1)],[Space: O(n*m)]]
    //Time: O(n)
    for (int i = 0; i < N; i++)
    {
        a = a + i;
        matrix[i][i] = a;
    }

    // Time: O(m)
    for (int j = 0; j < M; j++)
    {
        b = b + 2 * j;
        cout<<b<<" ";
    }

    return 0;
}