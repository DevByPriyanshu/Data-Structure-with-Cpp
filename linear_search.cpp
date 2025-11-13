#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> vec, int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (target == vec[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    int target = 3;
    int size = 5;
    cout << linearSearch(vec, size, target);
}