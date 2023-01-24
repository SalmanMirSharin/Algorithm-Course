#include<bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    int N = 10;
    for (int i = N; i > 0; i /= 2) {
    for (int j = 0; j < i; j++) {
        count += 1;
    }
}

return 0;
}


// Solve:
// O(n logn);