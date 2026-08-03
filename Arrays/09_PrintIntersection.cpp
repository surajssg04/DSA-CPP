#include <iostream>
using namespace std;



void printIntersection(const int arr1[], const int arr2[], int sz1, int sz2){
    for (int i=0; i<sz1; i++){
        for (int j=0; j<sz2; j++){
            if (arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}

int main(){

    int arr1[] = {1,2,3,4,5};
    int arr2[] = {0,9,3,5};
    int sz1 = 5;
    int sz2 = 4;

    printIntersection(arr1, arr2, sz1, sz2);

    return 0;
}
