#include<iostream>

using namespace std;

string sol(string s, int cnt){

    string chk = s.substr(0, 3);
    string tmp = "";
    for(int i =0; i< cnt; i++){
        tmp += chk;        
    }

    return tmp;
}

int main(void){
    cout << sol("Python", 2) << endl;
    cout << sol("Python", 3) << endl;
    cout << sol("JS", 3) << endl;
}