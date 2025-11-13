#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in an array:" << endl;
    cin >> n;
    int arr[n];
    int maxSum = 0;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Maximum Sum of Sub Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if(currSum < 0){
            currSum = 0;
        }
        else {
            maxSum = max(maxSum, currSum);
        }
    }
    cout << maxSum;
    return 0;
}