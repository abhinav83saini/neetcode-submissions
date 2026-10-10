class Solution {
public:
    string longestPalindrome(string s) {
        int res=0;
        int reslen=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            int j=i-1,k=i+1;
            int len=1;
            while(j>=0 && k<n){
                if(s[j]!=s[k]){
                    if(len>=reslen){
                        res=i;
                        reslen=max(len,reslen);
                    }
                    break;
                }
                else{
                    len=(k-j+1);
                }
                j--;k++;
            }
            if(len>=reslen){
                res=i;
                reslen=max(len,reslen);
            }
            j=i;k=i+1;
            while(j>=0 && k<n){
                if(s[j]!=s[k]){
                    if(len>=reslen){
                        res=i;
                        reslen=max(len,reslen);
                    }
                    break;
                }
                else{
                    len=(k-j+1);
                }
                j--;k++;
            }
            if(len>=reslen){
                res=i;
                reslen=max(len,reslen);
            }
        }
        string ans="";
        if(reslen%2==0){
            int k=reslen/2;
            ans=s.substr(res-k+1,reslen);
        }
        else{
            int k=reslen/2;
            ans=s.substr(res-k,reslen);
        }
        return ans;
    }
};
