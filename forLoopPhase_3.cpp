#include<iostream>
using namespace std;

//Question NO. 1
void print1To10(){
    for(int i=1; i<=10; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

//Question No. 2
void print10To1(){
    for(int i=10; i>0; i--){
        cout<<i<<" ";
    }
    cout<<endl;
}

//Question No. 3
void printEvenNumbers(){
    for(int i=1; i<100; i++){
        if(i % 2 == 0){
            cout<<i<<' ';
        }
    }
    cout<<endl;
}

//Question No. 4
void printOddNumbers(){
    for(int i=1; i<100; i++){
        if(i % 2 != 0){
            cout<<i<<' ';
        }
    }
    cout<<endl;
}

//Question No. 5
void printTable(int n){
    for(int i=1; i<=10; i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}

//Question No. 6
void printFactorial(int n){
    int fact = 1;
    for(int i=n; i>0; i--){
        fact *= i;
    }
    cout<<"Factorial is: "<<fact<<endl;
}

//Question No.7
void factorial1toN(int n){
    cout<<"Factorial from 1 to "<<n<<endl;
    for(int i=1; i<=n; i++){
        int fact = 1;
        for(int j=i; j>0; j--){
            fact *= j;
        }
        cout<<i<<" = "<<fact<<endl;
    }
}

//Question No.8
bool isPrimeHelper(int n){
    for(int i=2; i<n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void printPrimeNumber(){
    for(int i=1; i<=100; i++){
        if(isPrimeHelper(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

//Question No.9
void isPrime(int n){
    if(isPrimeHelper(n)){
        cout<<"prime number"<<endl;
    }else {
        cout<<"Not a prime number"<<endl;
    }
}

//Question No.10
void printFibonachhi(int n){
    int prev = 0;
    int curr = 1;
    cout<<prev<<' '<<curr<<" ";
    for(int i=2; i<n; i++){
        int next = prev + curr;
        cout<<next<<" ";
        prev = curr;
        curr = next;
    }
}

//Question No.11
void sumOfFibonachhi(int n){
    int prev = 0;
    int curr = 1;
    int sum = 1;
    
    for(int i=2; i<n; i++){
        int next = prev + curr;
        sum += next;
        prev = curr;
        curr = next;
    }
    cout<<sum<<endl;
}

//Question No.12
void printFactors(int n){
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

//Question No.13
void sumOfFactors(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    cout<<"sum of factors: "<<sum<<endl;
}

//Question No.14
int getHCF(int a, int b){
    for(; b!=0 ;){
        int rem = a % b;
        a = b;
        b = rem;
    }
   // cout<<"HCF is: "<<a<<endl;
    return a;
}

//Question No.15
void getLCM(int a, int b){
    int hcf = getHCF(a,b);
    int lcm = (a * b) / hcf;
    cout<<lcm<<endl;
}

//Question No.16
void printSquare(int n){
    for(int i=1; i<=n; i++){
        cout<<i<<" = "<<i*i<<endl;
    }
}

//Question No.17
void printCube(int n){
    for(int i=1; i<=n; i++){
        cout<<i<<" = "<<i*i*i<<endl;
    }
}

//Question No.18
void divBy7(int a, int b){
    for(int i=a; i<b; i++){
        if(i % 7 == 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

//Question No.19
void sumOfN(int n){
    int sum = 0;
    for(int i=n; i>0; i--){
        sum += i;
    }
    cout<<"sum: "<<sum<<endl;
}

//Question No.20
void sumOfEven(int n){
    int sum = 0;
    for(int i=n; i>0; i--){
       if(i % 2 == 0){
        sum += i;
       }
    }
    cout<<"sum of even numbers:  "<<sum<<endl;
}

//Question No.21
void sumOfOdd(int n){
    int sum = 0;
    for(int i=n; i>0; i--){
       if(i % 2 != 0){
        sum += i;
       }
    }
    cout<<"sum of odd numbers: "<<sum<<endl;
}

int main(){
    sumOfEven(5);
    sumOfOdd(5);
    return 0;
}