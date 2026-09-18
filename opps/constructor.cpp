#include<iostream>
using namespace std;

class Car{
    string name;
    string color;

    public:

    Car(string name, string color){
        this->name = name;
        this->color = color;
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

    string getName(){
        return name;
    }
};

int main(){
    Car c1("rolls roys","black");
    cout<<"car Name: "<<c1.getName()<<endl;
    return 0;
}