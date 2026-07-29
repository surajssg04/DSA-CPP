#include <iostream>
using namespace std;

int Dec2Binary(int decNum){
    int ans = 0, pow = 1;
    while(decNum > 0){
        int rem = decNum % 2;
        ans += (rem*pow);
        decNum /= 2;
        pow *= 10;
    }
    return ans;
}

int main(){
    int decNum = 50;
    cout << Dec2Binary(decNum) << endl;
    return 0;
}