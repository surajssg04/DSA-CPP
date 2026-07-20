#include <iostream>
using namespace std;

int main(){
    bool isPrime = true;
    int num = 19;

    for (int i=2; i*i<=num; i++){
        if(num%i == 0){
            isPrime = false;
            break;
        }
    }

    if (isPrime == true){
    cout << "Prime No\n";
    } else {
        cout << "Non Prime No\n";
    }



    return 0;
}