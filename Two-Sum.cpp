class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> index = std::vector<int>(2);
        int i,j;
        for(i=0;i<nums.size();i++){
            for(j=0;j<nums.size();j++){
                if(nums[i]+nums[j]==target && i!=j){
                    index[0]=i;
                    index[1]=j;
                }
            }
        }
        return index;
    }
};
