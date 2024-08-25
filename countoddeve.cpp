#include<iostream>
using namespace std;
int main(){
    int size, evecount=0, oddcount=0;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int a[size];
    cout<<"Enter the array: ";
    for(int i=0;i<size;i++){
        cin>>a[i];
        
    }
    for(int i=0;i<size;i++){
        if(a[i]%2==0){
            evecount++;
        }else{
            oddcount++;
        }
    }
    cout<<"Sum of odd numbers: "<<oddcount<<endl;
    cout<<"Sum of even numbers: "<<evecount<<endl;
}
