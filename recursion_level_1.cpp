#include<iostream>
using namespace std;

//Question No.1
void print(int n){
    if(n == 0){
        return ;
    }

    print(n-1);
    cout<<n<<" ";
}

//Question NO.2
void printNto1(int n){
    if(n == 0){
        return ;
    }
    cout<<n<<" ";
    printNto1(n-1);
}

//Question No.3
void printEvenNUmbers(int n){
    if(n == 0){
        return ;
    }

    printEvenNUmbers(n-1);
    if(n % 2 == 0){
        cout<<n<<" ";
    }
}

//Question No.4
void printOddNUmbers(int n){
    if(n == 0){
        return ;
    }

    printOddNUmbers(n-1);
    if(n % 2 != 0){
        cout<<n<<" ";
    }
}

//Question NO.5
int printSum(int n){
    if(n == 0){
        return 0;
    }

    return n + printSum(n-1);
}

//Question NO.6
int printFactorial(int n){
    if(n == 1){
        return 1;
    }

    return n * printFactorial(n-1);
}

//Question No.7
int power(int x, int n){
    if(n == 1){
        return x;
    }

    return x * power(x,n-1);
}

int fibonachhi(int n){
    if(n == 1 || n == 0){
        return n;
    }

    return fibonachhi(n-1) + fibonachhi(n-2);
}

int sumOfDigits(int n){
    if(n == 0){
        return n;
    }

    int lastDigit = n % 10;
    return lastDigit + sumOfDigits(n=n/10);
}

int printFibonachhi(int n){
    for(int i=0; i<=n; i++){
        cout<<fibonachhi(i)<<" ";
    }
    cout<<endl;
}
int main(){
    cout<<sumOfDigits(531)<<endl;
    return 0;
}