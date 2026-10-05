class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        if(n==h){
            return piles[n-1];
        }
        int st=1,end=piles[n-1];
        int best=piles[n-1];
        while(st<=end){
            int k=(st+end)/2;
            long sum=0;
            for(int i=0;i<n;i++){
                sum+=ceil((double)(piles[i]) / k);
            }
            if(sum<=h){
                best=k;
                end=k-1;
            }
            else{
                st=k+1;
            }
        }
        return best;
    }
};
