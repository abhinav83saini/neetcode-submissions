class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int t=nums[i]*(-1);
            int st=i+1,end=n-1;
            while(st<end){
                if(nums[st]+nums[end]==t){
                    ans.push_back({nums[i],nums[st],nums[end]});
                    // skip duplicates indices after getting a triplet
                    while(st<end && nums[st]==nums[st+1]) st++;
                    while(st<end && nums[end]==nums[end-1]) end--;
                    st++; end--;
                }
                else if(nums[st]+nums[end]<t){
                    st++;
                }
                else{
                    end--;
                }
            }
        }
        return ans;
    }
};
