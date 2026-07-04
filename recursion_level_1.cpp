#include<iostream>
using namespace std;

//Question No.1
void print(int n){
    if(n == 0){
        return;
    }
    print(n-1);
    cout<<n<<" ";
}

//Question No.2
void printNT01(int n){
    if(n == 0){
        return;
    }
    cout<<n<<" ";
    printNT01(n-1);
}

//Question No.3
void printEvenNumber(int n){
    if(n == 0){
        return;
    }
    printEvenNumber(n-1);
    if(n % 2 == 0){
        cout<<n<<" ";
    }
}

//Question No. 4
void printOddNumber(int n){
    if(n == 0){
        return;
    }
    printOddNumber(n-1);
    if(n % 2 != 0){
        cout<<n<<" ";
    }
}

//Question No.5
int sum(int n){
    if(n == 0){
        return 0;
    }
    return sum(n-1) + n;
}

//Question No.6
int factorial(int n){
    if(n == 0){
        return 1;
    }

    return factorial(n-1) * n;
}

//Question No.7
int power(int x, int n){
    if(n == 0){
        return 1;
    }

    return x * power(x,n-1);
}

//Question No.7
int fibonachhi(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fibonachhi(n-1) + fibonachhi(n-2);
}

void printFibonachhi(int n){
    for(int i=n; i>=0; i--){
        cout<<fibonachhi(i)<<" ";
    };
}

int sumOfDigit(int n){
    if(n == 0){
        return 0;
    }
    return n % 10 + sumOfDigit(n / 10);
}

int main(){
    cout<<sumOfDigit(153)<<endl;
    return 0;
}