#include<iostream>
#include<vector>
using namespace std;

int mostWater(vector <int> height){
    int result = 0;
    for(int i=0; i<height.size() - 1; i++){
        for(int j=1; j<height.size(); j++){
            int width = j-i;
            int length = min(height[i], height[j]);
            int currResult = width * length;
            if(currResult > result){
                result = currResult;
            }
        }
    }
    return result;
}

int main(){
    vector <int> height = {1,8,6,2,5,4,8,3,7};
    int result = mostWater(height);
    cout << result;
    return 0;
}