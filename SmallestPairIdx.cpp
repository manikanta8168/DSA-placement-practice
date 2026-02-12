#include <iostream>
using namespace std;

void printSmallestPairIdx(int arr[], int n) {
    if(n < 2) {
        cout << -1;
        return;
    }

    int mini = 0, smini = 1;

    if(arr[smini] < arr[mini])
        swap(mini, smini);

    for(int i = 2; i < n; i++) {
        if(arr[i] < arr[mini]) {
            smini = mini;
            mini = i;
        }
        else if(arr[i] < arr[smini]) {
            smini = i;
        }
    }

    if(mini < smini)
        cout << mini << " " << smini;
    else
        cout << smini << " " << mini;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    printSmallestPairIdx(arr, n);

    return 0;
}