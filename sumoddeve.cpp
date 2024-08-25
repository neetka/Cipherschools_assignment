#include<iostream>
using namespace std;
int main(){
    int size, evesum=0, oddsum=0;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int a[size];
    cout<<"Enter the array: ";
    for(int i=0;i<size;i++){
        cin>>a[i];
        
    }
    for(int i=0;i<size;i++){
        if(a[i]%2==0){
            evesum+=a[i];
        }else{
            oddsum+=a[i];
        }
    }
    cout<<"Sum of odd numbers: "<<oddsum<<endl;
    cout<<"Sum of even numbers: "<<evesum<<endl;
}
