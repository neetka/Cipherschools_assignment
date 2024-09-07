#include<iostream>
using namespace std;
int main(){
    int num=5;
    int *ptr = &num;
    int **ptrToptr= &ptr;
    cout<<"Value of Number using variable: "<<num<<endl;
    cout<<"Value of Number using pointer: "<<*ptr<<endl;
    cout<<"Value of Number using pointer to pointer: "<<**ptrToptr<<endl;
}