class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> a(26,0);
        int i=0,j=0,n=s.length(),res=1;;
        while(j<n){
            a[s[j]-'A']++;
            int idx=0;
            int maxi=a[0];
            for(int p=0;p<26;p++){
                if(a[p]>maxi){
                    maxi=a[p];
                    idx=p;
                }
            }
            if((j-i+1)-a[idx]<=k){
                res=max(res,j-i+1);
            }
            else{
                bool valid=false;
                while(i<=j && !valid){
                    a[s[i]-'A']--;
                    i++;
                    int idx=0;
                    int maxi=a[0];
                    for(int p=0;p<26;p++){
                        if(a[p]>maxi){
                            maxi=a[p];
                            idx=p;
                        }
                    }
                    if((j-i+1)-a[idx]<=k){
                        res=max(res,j-i+1);
                        valid=true;
                    }
                }
            }
            j++;
        }
        return res;
    }
};
