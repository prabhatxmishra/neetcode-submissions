class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int x=matrix.size();
        int y=matrix[0].size();
        int n=x*y;
        int s=0, e=n-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(matrix[mid/y][mid%y]==target) return true;
            else if(matrix[mid/y][mid%y]<target) s=mid+1;
            else e=mid-1;
        }
        return false;
    }
};
