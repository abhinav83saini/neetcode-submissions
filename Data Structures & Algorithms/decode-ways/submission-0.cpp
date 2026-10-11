class Solution {
public:
    unordered_map<int, int> dp;
    int helper(string &s, int i) {
        if (i==s.size()) return 1;
        if (s[i]=='0') return 0;

        if(dp.find(i) != dp.end()) {
            return dp[i];
        }

        int a = helper(s, i + 1);

        if (i + 1 < s.size()) {
            int num = (s[i] - '0') * 10 + (s[i + 1] - '0');

            if (num <= 26) {
                a += helper(s, i + 2);
            }
        }

        return dp[i] = a;
    }

    int numDecodings(string s) {
        dp.clear();
        return helper(s, 0);
    }
};