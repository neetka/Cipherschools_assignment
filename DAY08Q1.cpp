#include<iostream>
#include<cstring>
using namespace std;
int stringLength(string& str){
    int len= str.length();
    return len;
}
int main(){
    string s;
    getline(cin, s);
    int l= stringLength(s);
    cout<<l;
}