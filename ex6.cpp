#include<iostream>

using namespace std;

string sol(string s, unsigned int a){
    if(a<s.length()){
        return s.erase(a, 1);
    }

    return "error";
    
}

int main(void){
    cout << sol("Python", 1) << endl;
    cout << sol("Python", 0) << endl;  
    cout << sol("Python", 4) << endl;  

}