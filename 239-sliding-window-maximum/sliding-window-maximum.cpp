class Solution {
public:
    // int maximum(vector<int>& nums,int left,int right){
    //     int ans=nums[left];
    //     for(int i=left+1;i<=right;i++){
    //         ans=max(ans,nums[i]);
    //     }
    //     return ans;
    // }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // int n=nums.size();
        // vector<int> v;
        // int left=0;
        // int right=k-1;
        // int maxi=maximum(nums,left,right);
        // bool flag=false;
        // while(right<n){
        //     if(flag){
        //         flag=false;
        //         maxi=maximum(nums,left,right);
        //     }
        //     if(nums[right]>=maxi){
        //         maxi=nums[right];
        //     }
        //     if(nums[left]==maxi){
        //         flag=true;
        //     }
        //     v.push_back(maxi);
        //     left++;
        //     right++;
        // }
        int n = nums.size();
        deque<int> dq;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(!dq.empty() && dq.front()<=i-k){
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()]<nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i>=k-1){
                v.push_back(nums[dq.front()]);
            }
        }
        return v;
    }
};