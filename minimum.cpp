#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 5, 6, 47, 89, 2};
    int min = arr[0];
    for(int i=0; i<6; i++){

        if(min > arr[i+1]){
            min = arr[i+1];
        }
    }
    cout << min;
}