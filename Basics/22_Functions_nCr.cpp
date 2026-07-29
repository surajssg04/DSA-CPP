#include <iostream>
using namespace std;

int fact(int n){
    int f = 1;

    for (int i=1; i<=n; i++){
        f = f*i;
    }
    return f;
}

int nCr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main(){
    int n = 8;
    int r = 2;    
    cout << nCr(n, r);
    return 0;
}