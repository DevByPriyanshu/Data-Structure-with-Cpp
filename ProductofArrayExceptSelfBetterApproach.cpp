#include<iostream>
#include<vector>
using namespace std;

vector<int> product(vector<int> &nums){
    int n=nums.size();
    vector<int> answer(n, 1);
    int pref=1;
    int suff = 1;
    for(int i=1; i<n; i++){
        int pref = answer[i-1] * nums[i-1];
        answer[i] = pref;
    }
    for(int i=n-2; i>=0; i--){
        suff = suff * nums[i+1];
        answer[i] = suff * answer[i];
    }
    return answer;
}

int main(){
    vector <int> nums = {1,2,3,4};
    vector <int> answer = product(nums);
    for(int i=0; i< answer.size(); i++){
        cout << answer[i] << " ";
    }
    return 0;
}