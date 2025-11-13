#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {10,20,50,60,80,75};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Size of an array : " << size;
    return 0;    
}