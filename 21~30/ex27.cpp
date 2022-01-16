#include<iostream>

using namespace std;

bool sol(string s){
    
    int pos = s.find('a');
    if (s[pos+1]=='a'){
        return true;
    }
    
    return false;
}

int main(){
    cout << sol("caabb") << endl;
    cout << sol("babaaba") << endl;
    cout << sol("aaaaa") << endl;
    
    return 0;
}