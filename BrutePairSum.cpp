#include <iostream>
#include <vector>
using namespace std;

vector <int> twoSum(vector<int> vec, int target){
    vector <int> ans;
    for(int i=0; i<vec.size(); i++){
        for(int j=i+1; j<vec.size(); j++){
            int sum = vec[i] + vec[j];
            if(sum == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main(){
    vector <int> vec = {1,2,3,4,5};
    int target = 7;
    vector <int> ans = twoSum(vec, target);
    cout << ans[0] << "," << ans[1];
}