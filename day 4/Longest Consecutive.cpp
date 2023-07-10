class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int n=nums.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++) mpp[nums[i]]++;
        int maxcount=1;
        for(int i=0;i<n;i++){
            if(mpp.find(nums[i]-1)!=mpp.end()) continue;
            else{
                int count=0;
                int num=nums[i];
                while(mpp.find(num)!=mpp.end()){
                    count++;
                    num++;
                }
                maxcount=max(maxcount,count);
            }
        }
        return maxcount;
            }
};
