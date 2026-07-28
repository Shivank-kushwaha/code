#include<iostream>
using namespace std;

int binaryToDecimal(int n){

    int decimalSum = 0;
    int power = 1;

    while(n > 0){
        int lastDigit = n % 10;
        decimalSum += lastDigit * power;
        power = power * 2;
        n = n / 10;
    }

    return decimalSum;
}

int main(){
    int n = 111;
    cout<<binaryToDecimal(n)<<endl;
    return 0;
}