#include<iostream>
using namespace std;
void check(int n){
    if(n%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    check(num);
    return 0;
}