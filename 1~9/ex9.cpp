#include<iostream>

using namespace std;

string sol(string s){

    int len = s.length();
    if(len>=1){
        string chunk = s.substr(len-1,1);
        return chunk+s+chunk;
    }

    return "Error";
}

int main(void){

    cout << sol("Red") << endl;
    cout << sol("Green") << endl;
    cout << sol("1") << endl;
    return 0;
}

/*
"Red"
"Green"
"1"
*/