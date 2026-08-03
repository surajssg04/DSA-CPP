#include <iostream>
using namespace std;


void SwapMinAndMax(int *arr, int sz){
    int *min = arr;
    int *max = arr;
    for (int i=1; i<sz; i++){
        if (arr[i] < *min){
            min = &arr[i];
        } 
        
        if (arr[i] > *max){
                max = &arr[i];
        }
    }

    swap(*min, *max);

}

int main(){

    int arr[] = {1,8,3,0,5};
    int sz = 5;

    SwapMinAndMax(arr, sz);
    for (int i=0; i<sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}