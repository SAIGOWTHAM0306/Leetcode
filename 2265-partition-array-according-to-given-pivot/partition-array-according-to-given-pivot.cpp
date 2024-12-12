class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> brr(nums.size());
        int idx=0;
        for(int i:nums){
            if(i<pivot){
                brr[idx++]=i;
            }
        }
        for(int i:nums){
            if(i==pivot){
                brr[idx++]=i;
            }
        }
        for(int i:nums){
            if(i>pivot){
                brr[idx++]=i;
            }
        }
        return brr;
    }
};