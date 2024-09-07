#include<iostream>
#include<string>
using namespace std;
int countCharacter(string &str, char ch){
    int count = 0;
    for(int i = 0; i < str.length(); i++){  
        if(str[i] == ch){
            count++;
        }
    }
    return count;
}
int main(){
    string s;
    getline(cin, s);
    char c;
    cin>>c;
    cout<<countCharacter(s, c);
}