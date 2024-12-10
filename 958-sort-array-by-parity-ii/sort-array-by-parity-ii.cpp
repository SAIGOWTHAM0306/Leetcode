class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even_idx=0,odd_idx=1;
        int n=nums.size();
        while(even_idx<n && odd_idx<n){
            if(nums[even_idx]%2==0){
                even_idx+=2;
            }
            else if(nums[odd_idx]%2==1){
                odd_idx+=2;
            }
            else{
                swap(nums[even_idx],nums[odd_idx]);
            }
        }
        return nums;
    }
};