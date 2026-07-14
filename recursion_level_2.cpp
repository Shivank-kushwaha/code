#include<iostream>
using namespace std;

//Question No.1
int countDigit(int n){
    if(n == 0){
        return 0;
    }
    return 1 + countDigit(n=n/10);
}

//Question No.2
int reverseNUM(int n, int reverse){
    if(n == 0){
        return reverse ;
    }
   int lastDigit = n % 10;
   return reverseNUM(n =n / 10, reverse= reverse * 10 + lastDigit);
}

bool isPalindrom(int n){
    return n == reverseNUM(n,0);
}

int main(){
    cout<<isPalindrom(122)<<endl;
    return 0;
}