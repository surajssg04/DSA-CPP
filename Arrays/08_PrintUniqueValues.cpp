#include <iostream>
using namespace std;


void printUniqueValues(const int arr[], int sz){
    for (int i=0; i<sz; i++){
        int count = 0;
        for (int j=0; j<sz; j++){
            if (arr[i]==arr[j])
                count ++;
        }
        if (count == 1){
            cout << arr[i] << " ";
        }
    }
}


int main(){

    int arr[] = {1,1,1,2,2,6,7};
    int sz = 7;

    printUniqueValues(arr, sz);


    return 0;
}