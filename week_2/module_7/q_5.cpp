// #include<bits/stdc++.h>
// using namespace std;

// string int_to_binary(int decimal) {
//     string binary = "";
//     while (decimal > 0) {
//         if (decimal % 2 == 0) {
//             binary = '0' + binary;
//         }
//         else {
//             binary = '1' + binary;
//         }
//         decimal /= 2;
//     }
//     return binary;
// }

// int main(){
//    string binary = int_to_binary(10);
//    cout<<binary;

// return 0;
// }


//Solve:

#include<bits/stdc++.h>
using namespace std;

string int_to_binary(int decimal) {
    string binary = "";
        if(decimal<=0){
            return binary;
        }      
        if (decimal % 2 == 0) {
            binary = '0' + binary;
        }
        else {
            binary = '1' + binary;
        }
        decimal /= 2;
    return int_to_binary(decimal)+binary;
}

int main(){
    string binary = int_to_binary(5);
    cout<<binary;

return 0;
}
