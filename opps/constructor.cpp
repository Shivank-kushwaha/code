#include<iostream>
using namespace std;

class Car{
    string name;
    string color;

    public:

    Car(){
        this->name = "Rolls royes";
        this->color = "black";
        carColor();
        carName();
        cout<<"constructor invoked automatically at time of object creation"<<endl;
    }
    
    void carStart(){
        cout<<"car started"<<endl;
    }

    void carStop(){
        cout<<"car stoped"<<endl;
    }

    void carColor(){
        cout<<this->color<<endl;
    }

    void carName(){
        cout<<this->name<<endl;
    }
};

int main(){
    Car c1;
    return 0;
}