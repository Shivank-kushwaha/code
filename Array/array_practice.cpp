#include<iostream>
using namespace std;

//question no.1
void printArray(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the element of an array: ";

    for(int i=0; i<n; i++){
        cin>>arr[i];
        cout<<" ";
    }
    cout<<endl;

    cout<<"Final array: ";

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int sumOfElements(int arr[], int n){
    int sum = 0;
    
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    return sum;
}

//question no.2
int averageOfElement(int arr[], int n){
    int sum = 0;
    
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int avg = sum / n;
    return avg;
}

//question no.3
int maximumElement(int arr[], int n){
    int max = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

//question no.4
int minimumElement(int arr[], int n){
    int minimum = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i] < minimum){
            minimum = arr[i];
        }
    }
    return minimum;
}

//question no.5

void countTheNumber(){

    int arr[] = {1,2,3,6,345,334,-2,-90,0,0,0,-33,98,-56};
    int n = sizeof(arr) / sizeof(int); 

    int postive = 0;
    int negative = 0;
    int zero = 0;

    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            postive++;
        }else if(arr[i] < 0){
            negative++;
        }else {
            zero++;
        }
    }

    cout<<"postive numbers: "<<postive<<endl;
    cout<<"negative Numbers: "<<negative<<endl;
    cout<<"zero Numbers: "<<zero;
}

//question no.7
void countTheoddEven(){
    int arr[] = {9,45,33,2,77,56,7,8,90,200,48};
    int n = sizeof(arr) / sizeof(int); 

    int odd = 0;
    int even = 0;

    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            even++;
        }else {
            odd++;
        }
    }

    cout<<"Total Even numbers: "<<even<<endl;
    cout<<"Total odd numbers: "<<odd<<endl;
}

//qustion no. 8
int maximumElementIndex(int arr[], int n){
    int max =arr[0];

    int index;
    for(int i=1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
            index = i;
        }
    }

    return index;
}

//question no.9
int minimumElementIndex(int arr[], int n){
    int min = INT16_MAX;

    int index;
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
            index = i;
        }
    }

    return index;
}

//question no.10
void printArrayIfGreater(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the element of an array: ";

    for(int i=0; i<n; i++){
        cin>>arr[i];
        cout<<" ";
    }

    int k;
    cout<<"Enter K value: ";
    cin>>k;

    cout<<endl;
    cout<<"Final array: ";

    for(int i=0; i<n; i++){
        if(arr[i] > k){
        cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int arr[] = {2,7,3,5};
    int n = sizeof(arr) / sizeof(int);
    printArrayIfGreater();
    return 0;
}