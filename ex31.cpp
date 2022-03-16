#include<iostream>

using namespace std;


bool sol(int arr[], int length){
    
    if (length<3){
        printf("too short");
        return 1;
    }

    for(int i=2;i<length;i++){
        if(arr[i-2] == 1 && arr[i-1] == 2 && arr[i] == 3){
            return true;
        }
    }

    return false;
    
}

int main(void){
    int arr[] = {1,1,2,3,1};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << sol(arr, length) << endl;

    int arr2[] = {1,1,2,4,1};
    int length2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << sol(arr2, length2) << endl;
    
    int arr3[] = {1,1,1,2,3};
    int length3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << sol(arr3, length3) << endl;
    

    return 0;
}