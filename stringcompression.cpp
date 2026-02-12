#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;
        int i = 0;

        while(i < n) {
            char curr = chars[i];
            int cnt = 0;

            while(i < n && chars[i] == curr) {
                i++;
                cnt++;
            }

            chars[idx++] = curr;

            if(cnt > 1) {
                int num = cnt;
                string temp = "";

                while(num > 0) {
                    char ch = (num % 10) + '0';
                    temp = ch + temp;
                    num /= 10;
                }

                for(char c : temp) {
                    chars[idx++] = c;
                }
            }
        }

        return idx;
    }
};

int main() {
    int n;
    cin >> n;

    vector<char> chars(n);
    for(int i = 0; i < n; i++)
        cin >> chars[i];

    Solution obj;
    int len = obj.compress(chars);

    for(int i = 0; i < len; i++)
        cout << chars[i] << " ";

    return 0;
}