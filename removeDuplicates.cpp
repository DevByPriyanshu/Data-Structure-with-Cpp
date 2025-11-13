#include <iostream>
#include <vector>
using namespace std;

void removeDuplicate(vector<int> &nums)
{
    vector<int> comp;
    if (comp.size() == 0)
    {
        comp[0] = nums[0];
    }
    for (int i = 1; i < nums.size(); i++)
    {
        for (int j = 0; j < comp.size(); j++)
        {
            if (nums[i] != comp[j])
            {
                comp.push_back(nums[i]);
            }
        }
    }
    int k = comp.size();
    int i = 0;
    while (i < k)
    {
        for (int j = 0; j < k; j++)
        {
            if (comp[i] > comp[i + 1])
            {
                int swap = comp[i];
                comp[i] = comp[i + 1];
                comp[i + 1] = swap;
            }
        }
        i++;
    }
    for (int i = 0; i < k; i++)
    {
        cout << comp[i] << " ";
    }
}
int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    removeDuplicate(nums);
    return 0;
}