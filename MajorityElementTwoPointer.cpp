#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector <int> vec){
    sort(vec.begin(), vec.end());
    int freq = 1;
    int ans = vec[0];
    for(int i=1; i<vec.size()-1; i++){
        if(vec[i] == vec[i-1]){
            freq++; 
        }
        else{
            freq = 1;
            ans = vec[i];
        }
        if(freq > vec.size()/2){
            return ans;
        }
    }
}

int main(){
    vector <int> vec = {1,1,3,3,3,2,3,3,3};
    int res = majorityElement(vec);
    cout << "Majority no. of elements is: " << res;
}