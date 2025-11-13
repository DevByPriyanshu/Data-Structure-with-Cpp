#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int first = 0;
    int second = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                int first = first + i;
                int second = second + j;
            }
        }
    }
    cout << first << " " << second;
    return {first, second};
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    vector<int> Sum = twoSum(nums, target);
    cout<< Sum[0] << " " << Sum[1];
    return 0;
}