#include<iostream>
using namespace std;
class Car{
    string brandname;
    string model;
    string engine;
    int numberOfSeats;

    public:
    Car(string b, string m, string e, int n):brandname(b), model(m), engine(e), numberOfSeats(n){}

    void displayInfo(){
        cout<<"Brand name: "<<brandname<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Engine: "<<engine<<endl;
        cout<<"Number Of Seats: "<<numberOfSeats<<endl;
    }
};

int main(){
    Car myCar("Toyota", "Corolla", "V6", 5);
    myCar.displayInfo();
}