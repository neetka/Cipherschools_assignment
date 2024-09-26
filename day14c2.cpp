#include<iostream>
using namespace std;
class Rectangle{
    int length;
    int width;

    public:
    Rectangle(int l, int w) : length(l), width(w){}

    Rectangle(const Rectangle &rect){
        length = rect.length;
        width = rect.width;
        cout<<"Copy constructor called!"<<endl;
    }

    void displayArea(){
        cout<<"Area of Rectangle: "<<length*width<<endl;
    }
};

int main(){
    Rectangle rect1(10,5);
    Rectangle rect2= rect1;
    rect1.displayArea();
    rect2.displayArea();
    return 0;
}