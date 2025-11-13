#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in an array:" << endl;
    cin >> n;
    int arr[n];
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Maximum Sum of Sub Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int currentSum = 0;
            for (int w = i; w < j + 1; w++)
            {
                currentSum = currentSum + arr[w];
            }
            maxSum = max(currentSum, maxSum);
        }
    }
    cout << maxSum;
    return 0;
}