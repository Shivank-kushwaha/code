#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrom(char word[], int n){

    int start = 0;
    int end = n - 1;

    while(start <= end){
        
        if(word[start] != word[end]){
            return false;
        }

        start++;
        end--;
    }

    return true;
}

int main(){
    char word[] = "racecar";

    int result = isPalindrom(word,strlen(word));

    if(result){
        cout<<"Palindrom word"<<endl;
    }else{
        cout<<"Not a Palindrom word"<<endl;
    }
    return 0;
}