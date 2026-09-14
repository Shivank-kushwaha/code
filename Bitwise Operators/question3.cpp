#include<iostream>
using namespace std;

int clearIthBits(int num, int ith){

    for(int i=0; i<ith; i++){

        int bitmask = ~(1 << i);

        num = num & bitmask;
    }

    return num;
}

int main(){
    int num = 15;
    int ith = 2;
    cout<<"ans: "<<clearIthBits(num,ith)<<endl;
    return 0;
}