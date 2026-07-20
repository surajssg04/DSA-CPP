#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter any Character : ";
    cin >> ch;

    // cout << (int)ch;

    // if((int)ch >= 65 && (int)ch <= 90){
    //     cout << "The letter is Uppercase";
    // } else if ((int)ch >= 97 && (int)ch <= 122){
    //     cout << "The letter is Lowercase";
    // } else {
    //     cout << "Plz Enter a Valid Char";
    // }
    
    if(ch >= 'A' && ch <= 'Z'){
        cout << "The letter is Uppercase";
    } else if (ch >= 'a' && ch <= 'z'){
        cout << "The letter is Lowercase";
    } else {
        cout << "Plz Enter a Valid Char";
    }


    return 0;
}