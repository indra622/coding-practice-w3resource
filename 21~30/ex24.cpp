#include<iostream>

using namespace std;

string sol(string s, int cnt){

    string tmp = "";
    for(int i = 0; i<cnt; i++){
        tmp += s;
    }

    return tmp;
}


int main(void){
    cout << sol("JS", 2) << endl;
    cout << sol("JS", 3) << endl;
    cout << sol("JS", 1) << endl;

    return 0;
}