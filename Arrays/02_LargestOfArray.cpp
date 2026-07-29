#include <iostream>
using namespace std;

int main(){
    int size = 5;
    int Marks[size];

    for (int i = 0; i<size; i++){
        cin >> Marks[i];
    }

    int largest = INT_MIN;

    for (int i = 0; i < size; i++){
        // if(Marks[i] > largest){
        //     largest = Marks[i];
        // }
        largest = max(largest, Marks[i]);
    }

    cout << "The largest number is " << largest;
    
    return 0;
}