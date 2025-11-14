#include<iostream>
#include<vector>
using namespace std;

vector<int> product(vector<int> &nums){
    int n=nums.size();
    vector <int> answer;
    for(int i=0; i<n; i++){
        int product = 1;
        for(int j=0; j<n; j++){
            if(i == j){
                continue;
            }
            else{
                product = product * nums[j];
            }
        }
        answer.push_back(product);
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