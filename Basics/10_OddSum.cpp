#include <iostream>
using namespace std;

int main(){
    int n = 50;
    int i = 1;
    int sum = 0;

    while (i<=50){
        sum += i;
        i++;
    }

    cout<< "sum = " << sum << endl;
    
    return 0;
}