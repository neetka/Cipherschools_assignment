#include<iostream>
using namespace std;
int findTarget(int arr[], int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return 1;
        }
    }
    return 0;
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
    if(findTarget(a, size, target)){
        cout<<"YES";
    }
    else
    cout<<"NO";
}