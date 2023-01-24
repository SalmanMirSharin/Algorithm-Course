#include <bits/stdc++.h>
using namespace std;
/*
So, Final Time complexity is: O(n^2)
So, Final Space complexity is: O(1)
*/

int main()
{
    int N = 5; //[[Time: O(1)],[Space: O(1)]]
    int a = 0; //[[Time: O(1)],[Space: O(1)]]

    //[[Time: O(n^2)],[Space: O(1)]]
    for (int i = 0; i < N; i++)
    {
        for (int j = N; j > i; j--)
        {
            a = a + i + j;
        }
    }

    return 0;
}