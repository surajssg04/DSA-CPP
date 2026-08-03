#include <iostream>
using namespace std;


int LinearSearch(int a[], int size, int target){
        for (int i=0; i<size; i++){
        if(a[i] == target){
            return i;
        }
    }
    return -1; // Not Found
}

int main(){
    int size = 9;
    int a[] = {10,6,8,9,65,80,655,2,35};
    int target = 50;
    
    cout << LinearSearch(a, size, target) << endl;

    return 0;
}