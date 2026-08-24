class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                a+=s[i];
            }
            else if(s[i]>='A' && s[i]<='Z'){
                a+=(s[i]-'A'+'a');
            }
            else if(s[i]>='0' && s[i]<='9'){
                a+=s[i];
            }
            else{
                continue;
            }
        }
        string b=a;
        reverse(a.begin(),a.end());
        if(a==b) return true;
        else return false;
    }
};
