class Solution {
public:
    int countSubstrings(string s) {
         int res=0;
        int reslen=0;
        int n=s.length();
        int ct=0;
        for(int i=0;i<n;i++){
            int j=i-1,k=i+1;
            int len=1;
            ct++;
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
                    ct++;
                }
                j--;k++;
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
                    ct++;
                }
                j--;k++;
            }
        }
        
        return ct;
    }
};
