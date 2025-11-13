#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 54, 58, 89, 74, 43};
    int start = 0;
    int end = 5;
    while(start < end){
        int swap = arr[start];
        arr[start] = arr[end];
        arr[start] = swap;
        cout << arr[start] << " ";
        start++;
        end--;
    }
    return 0;
}