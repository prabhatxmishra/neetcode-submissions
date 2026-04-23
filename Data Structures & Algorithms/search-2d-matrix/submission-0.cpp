class Solution {
public:
    bool search(vector<int> arr, int target)
    {
        int s=0, e=arr.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]==target) return true;
            else if(arr[mid]<target) s=mid+1;
            else e=mid-1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i =0;i<matrix.size();i++)
        {
            if(search(matrix[i],target)) return true;
        }
        return false;
    }
};
