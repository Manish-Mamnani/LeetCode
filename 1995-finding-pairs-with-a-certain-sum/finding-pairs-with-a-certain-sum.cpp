class FindSumPairs {
public:
    vector<int> num1;
    vector<int> num2;
    unordered_map<int,int> mp;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        num1 = nums1;
        num2 = nums2;
        for(auto i : num2){
            mp[i]++;
        }
    }
    
    void add(int index, int val) {
        mp[num2[index]]--;
        num2[index] += val;
        mp[num2[index]]++;
    }
    
    int count(int tot) {
        int count = 0;
        for(auto i : num1){
            int check = tot - i;
            if(mp.find(check)!=mp.end()){
                count += mp[check];
            }
        }
        return count;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */