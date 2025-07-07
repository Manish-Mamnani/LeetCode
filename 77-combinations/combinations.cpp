class Solution {
public:
    vector<vector<int>> v;
    void solve(int n,int i,int k,vector<int> temp){
        if(temp.size()==k){
            v.push_back(temp);
            return;
        }
        for(int j=i;j<=n;j++){
            temp.push_back(j);
            solve(n,j+1,k,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        solve(n,1,k,temp);
        return v;
    }
};