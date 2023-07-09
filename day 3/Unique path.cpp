class Solution {

    int tiwari(int i, int j , int row, int col, vector<vector<int>> & dp){
        //base case
        if(i>row || j>col ) return 0;
        if(i==row && j==col) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int down=tiwari(i+1,j,row,col,dp);
        int right=tiwari(i,j+1,row,col,dp);
        return dp[i][j]=right+down;
    }
public:
    int uniquePaths(int r, int c) {
        vector<vector<int>> dp(r,vector<int>(c,-1));
     return  tiwari(0,0,r-1,c-1,dp);  
    }
};
