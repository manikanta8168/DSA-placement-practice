#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &arr, int idx) {
    if(idx == arr.size()) {
        for(int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << endl;
        return;
    }

    for(int i = idx; i < arr.size(); i++) {
        swap(arr[idx], arr[i]);
        solve(arr, idx + 1);
        swap(arr[idx], arr[i]);
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    solve(arr, 0);

    return 0;
}