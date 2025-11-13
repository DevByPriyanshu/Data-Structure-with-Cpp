#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 5, 6, 47, 89, 2};
    int max = arr[0];
    for(int i=0; i<6; i++){

        if(max < arr[i+1]){
            max = arr[i+1];
        }
    }
    cout << max;
}