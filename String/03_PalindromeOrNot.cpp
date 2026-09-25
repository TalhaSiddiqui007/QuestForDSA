#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool palindrome(string str) {
        int st = 0;
        int end = str.length() - 1;

        while (st <= end) {
            if (tolower(str[st]) != tolower(str[end])) {
                return false;
            }

            st++;
            end--;
        }

        return true;
    }
};

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    Solution obj;
    bool result = obj.palindrome(str);

    if (result) {
        cout << "Yes, it is a palindrome";
    } else {
        cout << "No, it is not a palindrome";
    }
}