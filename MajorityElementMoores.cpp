#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector <int> vec){
    int ans = 0;
    int freq = 0;
    for(int i=0; i<vec.size(); i++){
        if(freq == 0){
            ans = vec[i];
        }
        if(ans == vec[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}

int main(){
    vector <int> vec = {1,1,3,3,3,2,3,3,3};
    int res = majorityElement(vec);
    cout << "Majority no. of elements is: " << res;
}