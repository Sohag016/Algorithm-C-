#include <iostream>
#include <string>

using namespace std;

int LCS(int i, int j, const string& s, const string& t) {
    if (i == s.size() || j == t.size()) {
        return 0;
    }

    if (s[i] == t[j]) {
        return 1 + LCS(i + 1, j + 1, s, t);
    } else {
        return max(LCS(i + 1, j, s, t), LCS(i, j + 1, s, t));
    }
}

int main() {
    // string s = "ABCBDAB";
    // string t = "BDCAB";
    string s,t;
    cin>>s>>t;

    int result = LCS(0, 0, s, t);

    cout << "Length of Longest Common Subsequence: " << result << endl;

    return 0;
}
