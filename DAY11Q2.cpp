#include<iostream>
using namespace std;
int findTarget(int arr[], int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int a[size];
    cout<<"Enter elements of array";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    int target;
    cout<<"Enter the target element: ";
    cin>>target;
    int result = findTarget(a, size, target);
    if(result!=-1){
        cout<<result+1;
    }else{
        cout<<result;
    }
}