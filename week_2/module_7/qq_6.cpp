
//Solve:

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(b==0){
        return a;
    }
    int remainder = a % b;
    a = b;
    b = remainder;

  return gcd(a,b);
}
int main(){
    int gc = gcd(6,12);
    cout<<gc;
    
return 0;
}
