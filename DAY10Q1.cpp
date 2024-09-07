#include<iostream>
using namespace std;
int findMax(int arr[], int size){
    int max = arr[0];
    for (int i = 1; i < size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int size;
    cout<<"Enter size";
    cin>>size;
    cout<<"Enter elements of array: ";
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    int maximum = findMax(a, size);
    cout<<maximum;
}