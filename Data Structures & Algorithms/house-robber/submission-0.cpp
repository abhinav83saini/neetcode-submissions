class Solution {
public:
    vector<int> dp;
    int helper(int i,vector<int> nums,int n){
        if(i>=n){
            return 0;
        }
        if(i==n-1 || i==n-2){
            return nums[i];
        }
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(nums[i]+helper(i+2,nums,n),nums[i]+helper(i+3,nums,n));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        dp.resize(n+1,-1);
        if(n==1){
            return nums[0];
        }
        return max(helper(0,nums,n),helper(1,nums,n));
    }
};
