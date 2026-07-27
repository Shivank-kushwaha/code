#include<iostream>
using namespace std;

void funcInt(){
    int *ptr = new int;
    
    *ptr = 78;

    cout<<*ptr<<endl;

    delete ptr;
}

int main(){
    funcInt();
    return 0;
}