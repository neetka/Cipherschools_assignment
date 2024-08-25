#include<iostream>
using namespace std;
void rev(string s){
    string str="";
    int n = s.length();
    for(int i=n;i>=0;i--){
        str+=s[i];
    }
    cout<<"Reversed String: "<<str;
}
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    rev(str);
    return 0;
}