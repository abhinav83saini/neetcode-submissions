class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long prod=1;
        int ct=0;
        int idx=-1;
        for(int i=0;i<nums.size();i++){
           if(nums[i]!=0) prod*=nums[i];
           else{ 
            ct++;
            idx=i;
           }
        }

        vector<int> ans(nums.size(),0);
        if(ct>1) return ans;
        else if(ct==1){
            ans[idx]=prod;
            return ans;
        }
        for(int i=0;i<nums.size();i++){
            ans[i]=prod/nums[i];
        }
        return ans;
    }
};
