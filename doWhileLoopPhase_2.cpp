#include<iostream>
using namespace std;

//Question NO.1
void print1To10(){
        int i = 1;

    do{
        cout<<i<<" ";
        i++;
    }while(i <= 10);
}

//Question No.2
void printTable(int n){
    int i=1;
    do{
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }while(i <= 10);
}

//Question No.3
void takingNumbers(){
    int sum = 0;
    int a;
    do{ 
        cout<<"Enter the Number: ";
        cin>>a;
        sum += a;
    }while(a != 0);
}

//Question No.4
void findLargest(){
    int a;
    int max = 0;

    do{
        cout<<"Enter the number: ";
        cin>>a;
        if(a > max){
            max = a;
        }
    }while(a != 0);

    cout<<"maximum Number: "<<max<<endl;
}

//Question NO.5
void countDigit(int n){
    int count = 0;
    do{
        count++;
        n = n / 10;
    }while(n != 0);
    cout<<"Total Digits: "<<count<<endl;
}

//Question No. 6
void printReverse(int n){
    int res = 0;
    do{
        int lastDigit = n % 10;
        res = res * 10 + lastDigit;
        n = n / 10;
    }while(n != 0);
    cout<<"reverse value: "<<res<<endl;
}

//Question No. 7
void isPalindrom(int n){
    int res = 0;
    int num = n;
    do{
        int lastDigit = n % 10;
        res = res * 10 + lastDigit;
        n = n / 10;
    }while(n != 0);

    if(num == res){
        cout<<"it is palindrom"<<endl;
    }else {
        cout<<"Not palindrom"<<endl;
    }
}

//Question No. 8
void isArmstrong(int n){
    int sum = 0;
    int num = n;

    do{
        int lastDigit = n % 10;
        int cube = lastDigit * lastDigit * lastDigit;
        sum += cube;
        n = n / 10;
    }while(n != 0);

    if(sum == num){
        cout<<"it is a Armstrong number"<<endl;
    }else {
        cout<<"Not Armstrong number"<<endl;
    }
}

//Question NO. 9
void getFactorial(int n){
    int fact = 1;
    do{
        fact = fact * n;
        n--;
    }while(n > 0);
    cout<<"Factorial: "<<fact<<endl;
}

//Question No. 10
void printFibonacchi(int n){
    int prev = 0;
    int curr = 1;
    int i = 2;
    cout<<prev<<" "<<curr<<" ";

    do{
        int next = prev + curr;
        cout<<next<<" ",
        prev = curr;
        curr = next;
        i++;
    }while(i < 10);
}

//Question No. 11
void getHCF(int a, int b){
    do{
        int rem = a % b;
        a = b;
        b = rem;
    }while(b != 0);
    cout<<"HCF: "<<a<<endl;
}

void menuDriveProgram(){
    int a;
    int b;
    int choice;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    do{
        cout<<"Enter 1 for Addition"<<endl;
        cout<<"Enter 2 for Subtraction"<<endl;
        cout<<"Enter 3 for Multiplication"<<endl;
        cout<<"Enter 4 for Divison"<<endl;
        cout<<"Enter 5 for Modulo"<<endl;
        cout<<"Enter 6 for Exit"<<endl;

        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"sum is: "<<a+b<<endl;
            break;

            case 2:
            cout<<"subtraction is: "<<a-b<<endl;
            break;

            case 3:
            cout<<"Multiplication is: "<<a*b<<endl;
            break;
            
            case 4:
            cout<<"Divison is: "<<a/b<<endl;
            break;

            case 5:
            cout<<"modulo is: "<<a%b<<endl;
            break;

            case 6:
            cout<<"Exit"<<endl;
            break;

            default:
            cout<<"Invalid number"<<endl;
        }
    }while(choice != 6);
}

void checkNegative(){
    int n;
    int count = 0;
    do{
        cout<<"Enter a number: ";
        cin>>n;
        if(n > 0){
            count++;
        }
    }while(n > 0);

    cout<<"Total positive numbers are: "<<count<<endl;
}

void sumOfDigit(int n){
    int sum = 0;
    do{
        int lastDigit = n % 10;
        sum += lastDigit;
        n = n / 10;
    }while(n > 0);

    cout<<"Sum of Digits are: "<<sum<<endl;
}

void sumofDigitOddAndEven(int n){
    int odd = 0;
    int even = 0;

    do{
        int lastDigit = n % 10;
        if(lastDigit % 2 == 0){
            even += lastDigit;
        }else {
            odd += lastDigit;
        }
        n = n / 10;
    }while(n > 0);

    cout<<"sum of odd digits: "<<odd<<endl;
    cout<<"sum of even digits: "<<even<<endl;
}

int main(){
    sumofDigitOddAndEven(2345);
    return 0;
}