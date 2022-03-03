class Solution {
public:
     bool isVisited[205][205]={};
    void putZeros(vector<vector<int>>& matrix , int i,int j){
        for(int k=0;k<matrix.size();k++){
            if(matrix[k][j]!=0){
                isVisited[k][j]=true;
                 matrix[k][j]=0;
            }
           
            
        }
        for(int k=0;k<matrix[i].size();k++){
            if(matrix[i][k] !=0 ){
                 matrix[i][k]=0;
                 isVisited[i][k]=true;
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0 &&  !isVisited[i][j]){
                    putZeros(matrix,i,j);
                    isVisited[i][j]=true;
                }
            }
        }
    }
};

// Runtime: 12 ms, faster than 92.24% of C++ online submissions for Set Matrix Zeroes.
// Memory Usage: 13.3 MB, less than 19.70% of C++ online submissions for Set Matrix Zeroes.
