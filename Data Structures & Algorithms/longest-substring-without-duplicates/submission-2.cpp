class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> a(128,0);
        int j=0,maxl=0,i=0;
        for(i=0;i<s.length();i++){
            a[s[i]]++;
            if(a[s[i]]>1){
                maxl=max(maxl,i-j);
                while(j<=i && a[s[i]]!=1){
                    a[s[j]]--;
                    j++;
                }
            }
        }
        maxl=max(maxl,i-j);
        return maxl;
    }
};
