#include <iostream>
using namespace std;

int main(){

    int n = 4;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << "*";
        }

        for (int k=1; k<=2*(n-i); k++){
            cout << " ";
        }

        for (int m=1; m<=i; m++){
            cout << "*";
        }

        cout << endl;

    }

    
    for (int i=1; i<=n; i++){
        for (int j=i; j<=n; j++){
            cout << "*";
        }

        for (int k=1; k<=2*(i-1); k++){
            cout << " ";
        }

        for (int m=i; m<=n; m++){
            cout << "*";
        }

        cout << endl;

    }

    return 0;
}