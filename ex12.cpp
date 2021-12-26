#include<iostream>

using namespace std;

bool test(string s){
    string chunk = s.substr(0,2);

    return chunk=="C#";


}

int main(void){
    cout << test("C# Sharp") << endl;  
    cout << test("C#") << endl;  
    cout << test("C++") << endl; 
    
    return 0;
}