#include<iostream>
using namespace std;

class Car{
    string model;
    string name;
    string color;

    public:

    Car(string model, string name, string color){
        this->model = model;
        this->name = name; 
        this->color = color;
    }

    Car(Car &original){
        cout<<"custom copy"<<endl;
        model = original.model;
        name = original.name;
        color = original.color;
    }
    void print(){
        cout<<"model: "<<this->model<<endl;
        cout<<"name: "<<this->name<<endl;
        cout<<"color: "<<this->color<<endl;
    }

};

int main(){
    Car car1("xuv","tata","white");
    Car car2(car1);

    car2.print();

    return 0;
}