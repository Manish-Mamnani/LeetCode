class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> mp;
        while(n!=1){
            int t = n;
            mp[t]++;
            n = 0;
            while(t!=0){
                int d = t%10;
                n += pow(d,2);
                t = t/10;
            }
            if(mp.find(n)!=mp.end()) return false;
        }
        return true;
    }
};