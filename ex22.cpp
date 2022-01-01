#include<iostream>
#include<algorithm>

using namespace std;

bool sol(string s){

    unsigned int cnt = count(s.begin(), s.end(), 'z');

    if (cnt >=2 && cnt <=4){
        return true;
    }

    return false;
}

int main(void){
    cout << sol("frizz") << endl;
    cout << sol("zane") << endl;
    cout << sol("Zazz") << endl;
    cout << sol("false") << endl;

    return 0;
}