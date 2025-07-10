class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        mp[0] = 1;
        int countodds = 0;
        int countsub = 0; 
        for(auto i : nums){
            if(i%2!=0) countodds++;
            if(mp.find(countodds-k)!=mp.end()){
                countsub += mp[countodds - k];
            }
            mp[countodds]++;
        }
        return countsub;
    }
};