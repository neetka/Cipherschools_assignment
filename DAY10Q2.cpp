#include<iostream>
using namespace std;
bool isPalindrome(string s){
    int i = 0, j = s.length() - 1;
    while(i<=j){
        while(i<s.size()&& !isalnum(s[i]))i++;
        while(j>=0 && !isalnum(s[j]))j--;
        if(i<=j && tolower(s[i])!=tolower(s[j]))return false;
        i++;j--;
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);
    if(isPalindrome(s)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}