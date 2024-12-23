class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<31;i++){
            int cnt=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]&(1<<i)) cnt++;
            }
            if(cnt>=k){
                ans=ans^(1<<i);
            }
        }
        return ans;
    }
};