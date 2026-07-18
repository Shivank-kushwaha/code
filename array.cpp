#include<iostream>
#include<math.h>
using namespace std;

//Question No.1
int findLargest(int arr[],int n){
    
    int max = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

//Question No.2
int minimum(int arr[], int n){
    int min = arr[0];
    
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

//Question NO.3
int LinearSearch(int arr[],int n,int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
            break;
        }
    }
}

//Question NO.4
void reverseArray(int arr[], int n){
    int i = 0;
    int j = n - 1;

    while(i < j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//Question NO.5
int BinarySearch(int arr[],int n,int key){
    int start = 0;
    int end = n - 1;

    while(start <= end){
        int mid = (start + end) / 2;

        if(arr[mid] == key){
            return mid;
            break;
        }else if(key < arr[mid]){
            end = mid - 1;
        }else {
            start = mid + 1;
        }
    }
    return -1;
}

//Question No.6
void printSubArray(int arr[],int n){
    int max = 0;
    for(int i=0; i<n; i++){
         int sum = 0;
        for(int j=i; j<n; j++){   
           sum += arr[j]; 
        }
        if(sum > max){
                max = sum;
            }
    }
    cout<<max<<endl;
}

int kadansAlgo(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum < 0){
            sum = 0;
        }
    }
    return sum;
}

int main(){  
    int arr[] = {2,-3,6,-5,4,2};
    int n = 6;
    cout<<"kadan's algorithm sum: "<<kadansAlgo(arr,n)<<endl;
    return 0;
}