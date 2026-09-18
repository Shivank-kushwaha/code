#include<iostream>
using namespace std;

class Student{
    
    string name;
    float cgpa;
    
    public:

    void values(string name, float cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }

    void calculateCgpa(){
        cout<<"name is: "<<this->name<<endl;
        cout<<cgpa * 10<<endl;
    }
};

class User{
    public: 
    string username;
    string password;
    string bio;

    void deactivate(){
        cout<<"deactivate your account:"<<endl;
    }

    void updateBio(string newBio){
        bio = newBio;
    }
};
int main(){
    Student s1;
    s1.values("alex",9.6);
    s1.calculateCgpa();

    User u1;
    u1.username = "rolex";
    u1.password = "09u9uejfiweifwr2@#4h99h";
    u1.bio = "Gamer";
    u1.deactivate();
    cout<<"old value of bio: "<<u1.bio<<endl;
    u1.updateBio("Artist");
    cout<<"new value of bio: "<<u1.bio<<endl;
    return 0;
}