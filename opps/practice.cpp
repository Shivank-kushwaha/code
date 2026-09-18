#include<iostream>
using namespace std;

class User{
    string id;
    string password;
    
    public:

    string username;

    User(string id,string username,string password){
        this->id = id;
        this->password = password;
        this->username = username;
    }

    void print(){
        cout<<"username is: "<<username<<endl;
        cout<<"id: "<<id<<endl;
        cout<<"password: "<<endl;
    }
};

int main(){
    User user("shi121","new Palyer","12345");
    user.print();
    return 0;
}