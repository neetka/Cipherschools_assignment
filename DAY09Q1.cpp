#include<iostream>
#include<string>
using namespace std;

int main(){
    int number=5;
    int *ptr = &number;
    cout<<"Value of the number: "<<number<<endl;
    cout<<"Value of the number using pointer: "<<*ptr<<endl; 
}