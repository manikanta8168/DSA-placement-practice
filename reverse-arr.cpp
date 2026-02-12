#include <iostream>
using namespace std;

void reverseArr(int arr[], int n) {
    int i = 0, j = n - 1;
    
    while(i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArr(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}