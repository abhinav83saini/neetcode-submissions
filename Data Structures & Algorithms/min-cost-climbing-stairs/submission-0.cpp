class Solution {
public:
    vector<int> dp;
    int helper(int n,vector<int> cost){
        if(n==0 || n==1) return 0;
        if(dp[n]!=-1) return dp[n];
        int k=min(helper(n-1,cost)+cost[n-1],helper(n-2,cost)+cost[n-2]);
        return dp[n]=k;
    }


    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        dp.resize(n+1,-1);
        return helper(n,cost);
    }

};
