#include<iostream>
using namespace std;

//Question No.1
void print1To10(){
    int i = 1;
    while(i<11){
        cout<<i<<" ";
        i++;
    }
    cout<<endl;
}

//Question No.2
void print10To1(){
    int i= 10;
    while(i>0){
        cout<<i<<" ";
        i--;
    }
    cout<<endl;
}

//Question No.3
void printEvenNumber(){
    int i = 1;
    while(i < 100){
        if(i % 2 == 0){
            cout<<i<<" ";
        }
        i++;
    }
}

//Question No.4
void printOddNumber(){
    int i = 1;
    while(i < 100){
        if(i % 2 != 0){
            cout<<i<<" ";
        }
        i++;
    }
}

//Question No.5
void printTable(int n){
    int i = 1;
    while(i <= 10){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }
}

//Question No.6
void firstNSum(int n){
    int sum = 0;
    int i = n;
    
    while(i > 0){
        sum += i;
        i--;
    }
    cout<<"sum is -> "<<sum<<endl;
}

//Question No.7
void sumOfEvenNumber(int n){
    int sum = 0;
    int i = n;

    while(i > 0){
        if(i % 2 == 0){
            sum += i;
        }
        i--;
    }
    cout<<"sum of Even Numbers from 1 to "<<n<<" is :"<<sum<<endl;
}

//Question No.8
void sumOfOddNumber(int n){
    int sum = 0;
    int i = n;

    while(i > 0){
        if(i % 2 != 0){
            sum += i;
        }
        i--;
    }
    cout<<"sum of Even Numbers from 1 to "<<n<<" is :"<<sum<<endl;
}

//Question No.9
void getFactorial(int n){
    int fact = 1;
    int i = n;

    while(i > 0){
        fact = fact * i;
        i--;
    }
    cout<<"Factorial is: "<<fact<<endl;
}

//Question No.10
void productOfDigit(int n){
    int product = 1;

    while(n > 0){
        int lastDigit = n % 10;
        product = product * lastDigit;
        n = n / 10;
    }
    cout<<"Prouct of digit: "<<product<<endl;
}

//Question No.11
void countDigit(int n){
    int count = 0;
    while(n > 0){
        count++;
        n = n / 10;
    }
    cout<<"Total number of Digit: "<<count<<endl;
}

//Question No.12
void reverse(int n){
    int res = 0;
    int num = n;
    while(n > 0){
        int lastDigit = n % 10;
        res = res * 10 + lastDigit;
        n = n / 10;
    }
    cout<<num<<" -> "<<res<<endl;
}

//Question No.13
void isPalindrom(int n){
    int num = n;
    int res = 0;

    while(n > 0){
        int lastDigit = n % 10;
        res = res * 10 + lastDigit;
        n = n / 10;
    }

    if(res == num){
        cout<<"it is the palindrom number"<<endl;
    }
    else {
        cout<<"not a palindrom"<<endl;
    }
}

//Question No.14
void sumOfDigit(int n){
    int sum = 0;
    while(n > 0){
        int lastDigit = n % 10;
        sum += lastDigit;
        n = n / 10;
    }
    cout<<"sum of digit: "<<sum<<endl;
}

//Question No.15
void armstronNumber(int n){
    int num = n;
    int sum = 0;

    while(n > 0){
        int lastDigit = n % 10;
        int cube = lastDigit * lastDigit * lastDigit;
        sum += cube;
        n = n / 10;
    }
    if(sum == num){
        cout<<"it is the armstrong number"<<endl;
    }
    else {
        cout<<"Not a armstrong number"<<endl;
    }    
}

// Question No. 17
void IsperfectNumber(int n){
    int sum = 0;
    int num = n;
    int i = 1;

    while(i < n){
        if(n % i == 0){
           sum += i;
        }
        i++;
    }

    if(sum == num){
        cout<<"It is a perfect number "<<endl;
    }else {
        cout<<"Not a perfect number"<<endl;
    }
}

// Question No. 18
bool isPrimeHelper(int n){
    int i = 2;
    while(i < n){
        if(n % i == 0){
            return false;
        }
        i++;
    }
    return true;
}

void isPrime(int n){
    if(isPrimeHelper(n)){
        cout<<"it is Prime Number"<<endl;
    }else {
        cout<<"Not a prime Number"<<endl;
    }
}

// Question No. 19
void printFibonacchi(int n){
    int prev = 0;
    int curr = 1;
    cout<<prev<<" "<<curr<<" ";
    int i = 2;

    while(i < n){
        int third = prev + curr;
        cout<<third<<" ";
        prev = curr;
        curr = third;
        i++;
    }
    cout<<endl;
}

//Question No.20
void sumOfFibonachhi(int n){
    int curr = 0;
    int prev = 1;
    int i = 1;
    int sum = 0;

    while(i < n){
        int next = prev + curr;
        cout<<next<<" ";
        sum += next;
        prev = curr;
        curr = next;
        i++;
    }
    cout<<" sum of fibonachhi: "<<sum<<endl;
}

//Question No. 21
void printSquare(int n){
    int i = 1;
    while(i <= n){
        int square = i * i;
        cout<<i<<" = "<<square<<endl;
        i++;
    }
}

//Question No. 22
void printCube(int n){
    int i = 1;
    while(i <= n){
        int cube = i * i * i;
        cout<<i<<" = "<<cube<<endl;
        i++;
    }
}

//Question No.23
void printNumbersDivBy7(int a, int b){
    while(a<b){
        if(a % 7 == 0){
            cout<<a<<" ";
        }
        a++;
    }
    cout<<endl;
}

//Question No. 24
void printFactor(int n){
    int i=1;
    cout<<"Factors are: ";
    while(i <= n){
        if(n % i == 0){
            cout<<i<<" ";
        }
        i++;
    }
    cout<<endl;
}

//Question No. 25
void sumOfFactor(int n){
    int i=1;
    int sum = 0;
    while(i <= n){
        if(n % i == 0){
            sum += i;
        }
        i++;
    }
    cout<<"sum "<<sum<<endl;
}

//Question No.26
void findHcf(int a, int b){
    while(b != 0){
        int rem = a % b;
        a = b;
        b = rem;
    }

    cout<<"Highest Common Factor: "<<a<<endl;
}

//Question No.27
void findLcm(int a, int b){
    int max = (a > b) ? a : b;

    while(true){
        if(max % a == 0 && max % b == 0){
            cout<<"LCM is: "<<max<<endl;
            break;
        }
        max++;
    }
}

void getLcm(int a, int b){
    int b2 = b;
    int a2 = a;
    while(b != 0){
        int rem = a % b;
        a = b;
        b = rem;
    }
    int hcf = a;
    int lcm = a2 * b2 / hcf;
    cout<<"Lcm is: "<<lcm<<endl;
}
//Question No.28
void findSmallestDigit(int n){
    int sm = n;
    while(n > 0){
        int lastDigit = n % 10;
        if(lastDigit < sm){
            sm = lastDigit;
        }
        n = n / 10;
    }
    cout<<"smallest Digit: "<<sm<<endl;
}

//Question No.29
void findGreatestDigit(int n){
    int highest = 0;
    while(n > 0){
        int lastDigit = n % 10;
        if(lastDigit > highest){
            highest = lastDigit;
        }
        n = n / 10;
    }
    cout<<"highest Digit is: "<<highest<<endl;
}

int main(){
    findGreatestDigit(27282);
    return 0;
}