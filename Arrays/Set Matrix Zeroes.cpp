Approach 1- 
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        map<pair<int,int>,int>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    mp[{i,j}]=1;
                }
            }
        }

        for(auto it:mp){
            int row=it.first.first;
            int col=it.first.second;
            int i=0,j=0;
            while(i<n){
                matrix[i++][col]=0;
            }
            while(j<m){
                matrix[row][j++]=0;
            }
        }
      
    }
};


Optimal Approach - 

  class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int col0=1;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                matrix[i][0]=0;
                if(j!=0)
                matrix[0][j]=0;
                else
                col0=0;
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0)
                matrix[i][j]=0;
            }
        }

        if(matrix[0][0]==0){
            for(int i=0;i<m;i++)
            matrix[0][i]=0;
        }
        if(col0==0){
            for(int i=0;i<n;i++)
            matrix[i][0]=0;
        }
    }
};
