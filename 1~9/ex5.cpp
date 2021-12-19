#include<iostream>

using namespace std;

string sol(string s){
    if(s.length()>2 && s.substr(0,2)=="if")
        return s;
    return "if "+s;
    
}

int main(void){

    cout << sol("if else") << endl;
    cout << sol("else") << endl;


    return 0;
}