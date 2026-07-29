#include <iostream>
using namespace std;

bool ispowof2(int num){
    if (num <= 0){
        return false;
    }

    return (num & (num-1)) == 0;
}

int main(){
    int num = 6;
    if (ispowof2(num)){
        cout << num << " is power of 2";
    } else {
        cout << num << " is not power of 2";
    }
    return 0;
}