#include <iostream>
using namespace std;

int sumArray(const int arr[], int sz){
    int sum = 0;
    for(int i=0; i<sz; i++){
        sum += arr[i];
    }
    return sum;
}

int productArray(const int arr[], int sz){
    int product = 1;
    for(int i=0; i<sz; i++){
        product *= arr[i];
    }
    return product;
}

int main(){

    int arr[] = {1,2,3};
    int sz = 3;
    cout << "The sum of the Array is : " << sumArray(arr, sz) << endl;
    cout << "The product of the Array is : " << productArray(arr, sz);

    return 0;
}