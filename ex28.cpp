#include<iostream>

using namespace std;

string sol(string s){
    string ans;
    for(int i = 0 ; i< s.length(); i=i+2){
        ans +=s[i];
    }
    
    return ans;

    
}

int main(void){
    cout << sol("Python") << endl;
    cout << sol("PHP") << endl;
    cout << sol("JS") << endl;
}