#include <iostream>
#include <vector>
using namespace std;

vector <int> twoSum(vector<int> vec, int target){
    vector <int> ans;
    int i=0;
    int j = vec.size() - 1;
    while(i < j){
        int currSum = vec[i] + vec[j];
        if(currSum > target){
            j--;
        }
        else if(currSum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
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