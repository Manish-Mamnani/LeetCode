class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        // int lo = 0;
        // int hi = n-1;
        // while(hi-lo>1){
        //     int mid = lo + (hi-lo)/2;
            
        // }
        // if(hi>lo) return nums[lo];
        // else return nums[hi];
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            mini = min(nums[i],mini);
        }
        return mini;
    }
};