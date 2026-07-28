#include<iostream>
using namespace std;

int decimalToBinary(int n){

    int pow = 1;
    int binaryNum = 0;

    while(n > 0){
        int rem = n % 2;
        binaryNum += rem * pow;
        n = n / 2;
        pow = pow * 10;
    }

    return binaryNum;
}

int main(){
    int n= 10;

    cout<<decimalToBinary(n)<<endl;

    return 0;
}