#include<iostream>
using namespace std;

bool isCheck(int num ){
    
    if((num & num-1) == 0){
        return true;
    }else {
        return false;
    }
}

int main(){
    int num = 18;
    if(isCheck(num)){
        cout<<"this number is power two"<<endl;
    }else {
        cout<<"Not a power of two"<<endl;
    }
    return 0;
}