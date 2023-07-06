class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
       vector<vector<int>> a;
       vector<int> p=intervals[0];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=p[1]){
                  p[1]=max(intervals[i][1],p[1]);                
            }else{
                     a.push_back(p);
                     p=intervals[i];

            }
        } 
        a.push_back(p);
        return a;
    }
};
