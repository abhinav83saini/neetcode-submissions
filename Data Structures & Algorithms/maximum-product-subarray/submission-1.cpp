class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int mini=nums[0];
        int maxi=nums[0];
        int omax=nums[0];
        if(n==1) return maxi;
        for(int i=1;i<n;i++){
            int a=maxi*nums[i];
            int b=mini*nums[i];
            maxi=max(nums[i],max(a,b));
            mini=min(nums[i],min(b,a));
            omax=max(omax,maxi);
        }
        return omax;

    }
};
