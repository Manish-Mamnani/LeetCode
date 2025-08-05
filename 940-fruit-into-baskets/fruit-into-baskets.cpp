class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp;
        int n = fruits.size();
        int l = 0;
        int r = 0;
        int maxi = 1;
        while(l<=r && r<n){
            mp[fruits[r]]=r;
            if(mp.size()>2){
                int mini = INT_MAX;
                for(auto it:mp){
                    if(it.second<mini) mini = it.second;
                }
                mp.erase(fruits[mini]);
                l=mini+1;
            }
            maxi = max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};