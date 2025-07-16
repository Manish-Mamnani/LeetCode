class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        set<int> s;
        for(int num : nums){
            s.insert(num);
        }
        int tcount = 1;
        int temp = *s.begin();
        int maxcount = 0;
        for(auto it: s){
            if(it-1==temp){
                tcount++;
                temp = it;
            }
            else{
                tcount = 1;
                temp = it;
            }
            maxcount = max(maxcount,tcount);
        }
        return maxcount;
    }
};