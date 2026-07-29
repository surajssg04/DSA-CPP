    #include <iostream>
    using namespace std;


    int reverseNum(int num){
        bool isnegative = (num < 0);

        if (isnegative){
            num = -num;
        }

        int ans = 0;

        while(num > 0){
            int rem = num%10;
            ans = ans*10+rem;
            num /= 10;
        }

        if (isnegative){
            ans = -ans;
        }

        return ans;
    }

    int main(){
        cout << reverseNum(-125);
        return 0;
    }