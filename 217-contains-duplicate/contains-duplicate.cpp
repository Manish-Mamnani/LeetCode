class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])==mp.end()) mp[nums[i]]++;
            else return true;
        }
        return false;
    }
};