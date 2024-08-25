#include<iostream>
using namespace std;
int main(){
    float x; 
    float sum=0;
    for(int i=1;i<=5;i++){
        cout<<"Enter grade "<<i<<": ";
        cin>>x;
        sum+=x;
    }
    float avg=sum/5;
    cout<<"The average grade is "<<avg;
}