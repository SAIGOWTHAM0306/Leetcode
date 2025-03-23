class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int size=nums.size();
        vector<int> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<size;i++){
            if(nums[i]==target){
                res.push_back(i);
            }
            else if(nums[i]>target){
                break;
            }
        }
        return res;
    }
};