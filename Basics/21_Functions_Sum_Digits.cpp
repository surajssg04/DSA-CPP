#include <iostream>
using namespace std;

int sum(int x){
    int s = 0;
    while(x>0){
        int dig = x%10;
        s = s+dig;
        x = x/10;
    }
    return s;
}

int main(){
    cout << sum(123) << endl;
    cout << sum(555) << endl;
    cout << sum(1786767) << endl;
    return 0;
}