class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        for(int i=1;i<n-1;i++){
            int last = nums[i-1];
            while(nums[i]==nums[i+1]){
                i++;
            }
            if(last<nums[i] && nums[i]>nums[i+1]){
                return i;
            }
        }
        return nums[n-1]>nums[0]?n-1:0;
    }
};