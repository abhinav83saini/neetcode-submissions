class Solution {
public:
    int helper(int i,vector<int> nums,int n,vector<int> &dp){
        if(i>=n){
            return 0;
        }
        if(i==n-1 || i==n-2){
            return nums[i];
        }
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(nums[i]+helper(i+2,nums,n,dp),nums[i]+helper(i+3,nums,n,dp));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp1(n,-1);
        vector<int> dp2(n,-1);
        if(n==1){
            return nums[0];
        }
        if(n==3){
            return max(nums[0],max(nums[1],nums[2]));
        }
        vector<int> arr1=nums;
        arr1.pop_back();
        vector<int> arr2=nums;
        reverse(arr2.begin(),arr2.end());
        arr2.pop_back();
        reverse(arr2.begin(),arr2.end());
        int a=max(helper(0,arr1,n-1,dp1),helper(1,arr1,n-1,dp1));
        int b=max(helper(0,arr2,n-1,dp2),helper(1,arr2,n-1,dp2));
        return max(a,b);
    }
};
