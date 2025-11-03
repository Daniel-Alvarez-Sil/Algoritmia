#include<bits/stdc++.h>
using namespace std;

long long int cMod = 10e9 + 7; 

long long int bExp(long long int a, long long int n){
    long long int r = 1; 
    while (n > 0){
        cout << a << '\n'; 
        if (n & 1){
            r = (r % cMod) * (a % cMod); 
            r = r % cMod; 
        }
        a = a * a; 
        n = n >> 1; 
    }
    return r; 
}

int main(){
    long long int a = 0; 
    long long int n = 0;
    cin >> a >> n; 
    cout << bExp(a,n); 
    return 0; 
}