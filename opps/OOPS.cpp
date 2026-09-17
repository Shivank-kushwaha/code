#include<iostream>
using namespace std;

class student{
    public:
    string name;
    float cgpa;

    void calculateCgpa(){
        cout<<cgpa * 10<<endl;
    }
};

int main(){
    student s1;
    s1.name = "shivank";
    s1.cgpa = 9.8;
    s1.calculateCgpa();
    return 0;
}