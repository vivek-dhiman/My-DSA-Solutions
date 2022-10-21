//Given an m x n matrix, return all elements of the matrix in spiral order.

class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        // code here
        int top=0,down=R-1,left=0,right=C-1;
        int direction=1;
        vector<int> res;
        while(top<=down&&left<=right){
            if(direction==1){
                for(int i=left;i<=right;i++){
                    res.push_back(a[top][i]);
                }
                top++;
                direction=2;
            }
            else if(direction==2){
                for(int i=top;i<=down;i++){
                    res.push_back(a[i][right]);
                }
                right--;
                direction=3;
            }
            else if(direction==3){
                for(int i=right;i>=left;i--){
                    res.push_back(a[down][i]);
                }
                down--;
                direction=4;
            }
            else if(direction==4){
                for(int i=down;i>=top;i--){
                    res.push_back(a[i][left]);
                }
                left++;
                direction=1;
            }
        }
        return res;
    } 
};
