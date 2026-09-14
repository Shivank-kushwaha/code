#include<iostream>
using namespace std;

int fastExponential(int x, int n){
    int ans = 1;

    while(n > 0){
        int lastDigit = n & 1;

        if(lastDigit){
            ans = ans * x;
        }

        x = x * x;
        n = n >> 1;
    }

    return ans;
}

int main(){
    int x = 2;
    int n = 4;
    cout<<"ans: "<<fastExponential(x,n)<<endl;
    return 0;
}