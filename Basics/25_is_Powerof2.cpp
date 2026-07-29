#include <iostream>
using namespace std;

bool isPowof2(int num){
    if (num <=0){
        return false;
    }
    
    while (num > 1){        
        if(num%2 != 0){
            return false;
        }
        
        num /= 2;    
    }    
    return true;
}

int main(){
    int num = 1;

    if (isPowof2(num)) {
        cout << num << " is the power of 2";
    } else {
        cout << num << " is not the power of 2";
    }

    return 0;
}