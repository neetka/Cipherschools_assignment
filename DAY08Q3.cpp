#include<iostream>
#include<string>
using namespace std;

string concatenateStrings(string &str1, string &str2){
    string result = str1 + str2;
    return result;
}
int main(){
    string s1, s2;
    cin>>s1>>s2;
    cout<<concatenateStrings(s1,s2)<<endl;
}