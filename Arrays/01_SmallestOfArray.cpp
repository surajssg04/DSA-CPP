#include <iostream>
using namespace std;

int main(){
    int size = 5;
    int Marks[size];

    for (int i = 0; i<size; i++){
        cin >> Marks[i];
    }

    int smallest = INT_MAX;

    for (int i = 0; i < size; i++){
        // if(Marks[i] < smallest){
        //     smallest = Marks[i];
        // }
        smallest = min(smallest, Marks[i]);
    }

    cout << "The smallest number is " << smallest;
    
    return 0;
}