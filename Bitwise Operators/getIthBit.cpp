#include<iostream>
using namespace std;

int getIthBit(int num, int i){
    int bitmask = (1 << i);
    int ans = (num & bitmask);

    if(ans > 0){
        return 1;
    }else {
        return 0;
    }
}
int main(){
    int num = 19;
    int i = 2;
    cout<<"The bit is: "<<getIthBit(num,i)<<endl;
    return 0;
}