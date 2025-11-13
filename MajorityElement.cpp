#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector <int> vec){
    int maxFreq = 0;
    for(int i=0; i<vec.size(); i++){
        int freq = 0;
        for(int j=0; j<vec.size(); j++){
            if(vec[i] == vec[j]){
                freq++;
            }
        }
        max(maxFreq, freq);
    }
    return maxFreq;
}

int main(){
    vector <int> vec = {1,1,3,3,3,2,3,3,3};
    int res = majorityElement(vec);
    cout << "Majority no. of elements is: " << res;
}