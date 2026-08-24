class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int t=target-nums[i];
            int a=i+1,b=n-1;
            while(a<=b){
                int mid=a+(b-a)/2;
                if(nums[mid]>t){
                    b=mid-1;
                }
                else if(nums[mid]<t){
                    a=mid+1;
                }
                else{
                    return {i+1,mid+1};
                }
            }
        }
        return {-1,-1};
    }
};
