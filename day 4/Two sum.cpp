class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int,int> mpp;
        for(int i=0;i<nums.size();i++) mpp[nums[i]]++;
      for(int i=0;i<nums.size();i++){
         mpp[nums[i]]--;
          int num=target-nums[i];
          if(mpp.find(num)!=mpp.end()){
              vector<int> v;
              v.push_back(i);
              for(int j=0;j<nums.size();j++){
                  if(j!=i && nums[j]==num) v.push_back(j);
              }
              return v;
          }
          mpp[nums[i]]++;
      }  
      return {-1,-1};
    }
};
