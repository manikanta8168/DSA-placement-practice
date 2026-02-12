#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int n) {
    if(n < 2) return -1;

    int maxi = arr[0];
    int smax = -1;

    for(int i = 1; i < n; i++) {
        if(arr[i] > maxi) {
            smax = maxi;
            maxi = arr[i];
        }
        else if(arr[i] < maxi && arr[i] > smax) {
            smax = arr[i];
        }
    }

    return smax;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findSecondLargest(arr, n);

    return 0;
}