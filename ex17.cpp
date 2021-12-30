#include<iostream>

using namespace std;

string sol(string s){

    if(s.substr(1,2)=="yt"){
        return s.erase(1,2);
    }
    return s;
}

int main(void){
    cout << sol("Python") << endl;
    cout << sol("ytade") << endl;
    cout << sol("jeues") << endl;
    return 0;
}