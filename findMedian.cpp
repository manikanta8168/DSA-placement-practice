#include <iostream>
#include <vector>
using namespace std;

double findMedian(vector<int> &a, vector<int> &b) {
    int n = a.size(), m = b.size();
    int i = 0, j = 0;
    vector<int> c;

    while(i < n && j < m) {
        if(a[i] < b[j])
            c.push_back(a[i++]);
        else
            c.push_back(b[j++]);
    }

    while(i < n)
        c.push_back(a[i++]);

    while(j < m)
        c.push_back(b[j++]);

    int total = n + m;

    if(total % 2 == 0)
        return (c[total/2 - 1] + c[total/2]) / 2.0;
    else
        return c[total/2];
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < m; i++)
        cin >> b[i];

    cout << findMedian(a, b);

    return 0;
}