#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &vec, int start, int end)
{
    while (start < end)
    {
        int value = vec[start];
        vec[start] = vec[end];
        vec[end] = value;
        start++;
        end--;
    }
    return;
}

int printReverse(vector<int> vec, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << vec[i] << " ";
    }
}

int main()
{
    int size;
    cout << "Enter the size of the vector:";
    cin >> size;
    vector<int> vec(size);
    int start = 0;
    int end = size - 1;
    cout << "Enter the elemenst in the vector:";
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
    }

    reverseArray(vec, start, end);
    printReverse(vec, size);
}