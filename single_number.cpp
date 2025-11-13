#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec = {1,5,1,5,8};
    int n=0;
    for(int value: vec){
        n = value^0;
    }
    cout << n;
    return 0;
}