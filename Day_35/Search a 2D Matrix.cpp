//Code: 

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int m= matrix.size(), n = matrix[0].size(),x ,y;
      int lo =0, hi =m*n-1,mid;
      if(hi == 0)
        return (matrix[0][0] == target);
      while(lo <= hi){
        mid = lo + (hi-lo)/2;
        x = mid / n; //for row
        y = mid % n; //for column
        if(matrix[x][y]==target)
          return true;
        else if(matrix[x][y]>target)
          hi = mid -1;
        else
          lo = mid+1;
      }
      return false;
    }
};
