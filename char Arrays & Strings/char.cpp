#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char word[30];
    cin.getline(word,30);

    int n = sizeof(word) / sizeof(char);

    cout<<"your word was: "<<word<<endl;
    cout<<"size of word: "<<n<<endl;
    cout<<"Length of word: "<<strlen(word)<<endl;
    return 0;
}