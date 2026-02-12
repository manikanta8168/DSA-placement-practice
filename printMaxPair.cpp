#include <iostream>
using namespace std;

void printMaxPairIdx(int arr[], int n) {
    if(n < 2) {
        cout << -1;
        return;
    }

    int maxi = 0, smax = 1;

    if(arr[smax] > arr[maxi])
        swap(maxi, smax);

    for(int i = 2; i < n; i++) {
        if(arr[i] > arr[maxi]) {
            smax = maxi;
            maxi = i;
        }
        else if(arr[i] > arr[smax]) {
            smax = i;
        }
    }

    if(maxi < smax)
        cout << maxi << " " << smax;
    else
        cout << smax << " " << maxi;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    printMaxPairIdx(arr, n);

    return 0;
}