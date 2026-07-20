#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter any Number : ";
    cin>>num;

    if(num%2==0){
        cout<<num<<" is Even\n";
    } else {
        cout<<num<<" is Odd";
    }

    return 0;
}