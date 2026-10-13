class Solution {
public:
    vector<vector<int>> dp;
    int helper(vector<int>& coins,int amount,int i){
        if(amount==0){
            return 0;
        }
        if(amount<0 || i>=coins.size()){
            return 1000000;
        }
        if(dp[i][amount]!=-1){
            return dp[i][amount];
        }
        int a=1+helper(coins,amount-coins[i],i);
        int b=helper(coins,amount,i+1);

        return dp[i][amount]=min(a,b);
    }

    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        dp.resize(n,vector<int>(amount+1,-1));
        sort(coins.begin(),coins.end(),greater<int>());
        int ans=helper(coins,amount,0);
        if(ans>=1000000){
            return -1;
        }
        return ans;
    }
};
