class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();
       for(int i=0;i<n;i++){
           for(int j=i+1;j<m;j++){
               swap(a[i][j],a[j][i]);
           }
       }
       for(int i=0;i<n;i++){
           reverse(a[i].begin(),a[i].end());
       }
    }                
};
