#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int N=10; //[[Time: O(1)],[Space: O(1)]]
    int a = 0, i = N; //[[Time: O(1)],[Space: O(1)]]
    vector<int> vec; //[[Time: O(1)],[Space: O(1)]]

    //[Time: O(log n)]
    while ( i > 0)
    {
        a += i;
        i /= 2;
        vec.push_back(a); //[Space: O(log n)]
    }

    return 0;
}
