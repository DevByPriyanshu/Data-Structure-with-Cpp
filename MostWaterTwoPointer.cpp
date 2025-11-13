#include<iostream>
#include<vector>
using namespace std;

int mostWater(vector <int> height){
    int result = 0;
    int i=0;
    int j=height.size() - 1;
    while(i<j){
        int width = j-i;
        int length = min(height[i], height[j]);
        int currResult = width * length;
        if(currResult > result){
            result = currResult;
        }
        (height[i] < height[j] ? i++ : j--);
    }
    return result;
}

int main(){
    vector <int> height = {1,8,6,2,5,4,8,3,7};
    int result = mostWater(height);
    cout << result;
    return 0;
}