class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int count=0,elm=-1;
    for(int i=0;i<nums.size();i++){
      if(count==0){
        elm=nums[i];
        count=1;
      }
      else{
        if(nums[i]==elm) count++;
        else count--;
      }
    }
    return elm;
    }
};
