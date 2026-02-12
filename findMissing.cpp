#include <iostream>
using namespace std;

int findMissing(int arr[], int n) {
    int total = (n * (n + 1)) / 2;
    int sum = 0;

    for(int i = 0; i < n - 1; i++)
        sum += arr[i];

    return total - sum;
}

int main() {
    int n;
    cin >> n;

    int arr[n - 1];
    for(int i = 0; i < n - 1; i++)
        cin >> arr[i];

    cout << findMissing(arr, n);

    return 0;
}