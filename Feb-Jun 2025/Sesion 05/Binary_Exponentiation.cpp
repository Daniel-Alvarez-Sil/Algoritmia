#include <bits/stdc++.h>
using namespace std; 

int bexp(int a, int n){
    int r = 1; 

    while (n > 0){
        cout << a << '\n'; 
        if (n & 1)
            r = r * a; 
        n = n >> 1; 
        a = a * a; 
    }
    return r; 
}

int main(){
    cout << bexp(3, 10); 
    return 0; 
}