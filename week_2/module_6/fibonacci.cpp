#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;

   int num1 = fibonacci(n-1);
   int num2 = fibonacci(n-2);

    return num1 + num2;

}

int main(){
    int fibo = fibonacci(6);
    cout<<fibo;

return 0;
}