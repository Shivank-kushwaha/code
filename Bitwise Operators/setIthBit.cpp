#include<iostream>
using namespace std;

int setIthBit(int num, int i){
    int bitmask = (1 << i);

    int befSet = (num & bitmask);

    if(befSet > 0){
        cout<<"before set ith bit: "<<1<<endl;
    }else {
        cout<<"before set ith bit: "<<befSet<<endl;
    }
    int ans = (num | bitmask);

   
    if(ans > 0){
        return 1;
    }else {
        return 0;
    }
}

int main(){
    int num = 6;
    int i = 3;
    cout<<"after set ith bit: "<<setIthBit(num,i)<<endl;
    return 0;
}