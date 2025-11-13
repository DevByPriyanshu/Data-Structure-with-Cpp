#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in an array:" << endl;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Maximum Subarray elements are:" << endl;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int w = i; w<j+1; w++){
                cout << arr[w];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}