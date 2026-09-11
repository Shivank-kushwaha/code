#include<iostream>
using namespace std;

bool checkOddOrEven(int n){
    if((n & 1) == 0){
        return true;
    }else {
        return false;
    }
};

int main(){
    int n =157;

    if(checkOddOrEven(n)){
        cout<<"Even Number"<<endl;
    }else{
        cout<<"Odd Number"<<endl;
    }
    return 0;
}