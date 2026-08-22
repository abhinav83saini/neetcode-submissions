class Solution {
public:
    vector<int> v;
    string encode(vector<string>& strs) {
        string s="";
        for(int i=0;i<strs.size();i++){
            s+=strs[i];
            v.push_back(strs[i].length());
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int k=0;
        for(int i=0;i<v.size();i++){
            ans.push_back(s.substr(k,v[i]));
            k+=v[i];
        }
        return ans;
    }
};
