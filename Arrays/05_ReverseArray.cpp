#include <iostream>
using namespace std;

//reverse by 2 pointer approach

// void SwapNum(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

int main(){

    int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;

    int start = 0;
    int end = sz-1;

    while(start < end){
            swap(arr[start], arr[end]);
            start ++;
            end --;
        }
    
    for (int i=0; i<sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}