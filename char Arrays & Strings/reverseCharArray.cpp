#include<iostream>
#include<cstring>
using namespace std;

void reverseChar(char word[], int n){

    int start = 0;
    int end = n - 1;

    while(start <= end){

        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;

        start++;
        end--;
    }

    cout<<word<<endl;
}

int main(){
    char word[] = "apnacollege";

    reverseChar(word, strlen(word));

    cout<<word<<endl;
    return 0;
}