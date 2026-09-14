#include<iostream>
using namespace std;

int countSetBit(int num){

    int count = 0;

    while(num > 0){

        int digit = num & 1;

        count += digit;

        num = num >> 1;
    }

    return count;
}

int main(){
    int num = 15;
    cout<<"total set bits: "<<countSetBit(num)<<endl;
    return 0;
}