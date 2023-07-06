class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();

        int b[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                b[i][j]=a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==0){
                    int r=i;
                    int c=j;
                    for(int k=0;k<m;k++) b[r][k]=0;
                    for(int l=0;l<n;l++) b[l][c]=0;
                }
            }
        }
          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               a[i][j]=b[i][j];
            }
        }

    }
};
