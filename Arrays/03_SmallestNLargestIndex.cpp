#include <iostream>
using namespace std;

int main(){
    int size = 5;
    int marks[size];

    for(int i=0; i<size; i++){
        cin >> marks[i];
    }

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex = -1;
    int largestIndex = -1;

    for(int i=0; i<size; i++){
        if(marks[i] < smallest){
            smallest = marks[i];
            smallestIndex = i;
        }

        if(marks[i] > largest){
            largest = marks[i];
            largestIndex = i;
        }        
    }

    cout << "The Index of the smallest Num is : " << smallestIndex << endl;
    cout << "The Index of the largest Num is : " << largestIndex;

    return 0;
}