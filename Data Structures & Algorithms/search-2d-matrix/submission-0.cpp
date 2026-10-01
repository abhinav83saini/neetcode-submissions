class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int idx=-1;
        for(int i=0;i<m;i++){
            if(target>=matrix[i][0] && target<=matrix[i][n-1]){
                idx=i;
                break;
            }
        }
        if(idx==-1){
            return false;
        }
        int i=0,j=n-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(matrix[idx][mid]==target){
                return true;
            }
            else if(matrix[idx][mid]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return false;
    }
};
