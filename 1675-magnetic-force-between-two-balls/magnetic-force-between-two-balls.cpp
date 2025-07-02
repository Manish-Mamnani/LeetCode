class Solution {
public:
    bool solve(vector<int> position,int mid,int m){
        int count = 1;
        int last = 0;
        for(int i=0;i<position.size();i++){
            if(position[i]-position[last]>=mid){
                count++;
                last = i;
            }
            if(count==m) return true;
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        int l = 1;
        sort(position.begin(),position.end());
        // int r = position[n-1] - position[0];
        int r = ceil(position[n - 1] / (m - 1.0));
        int ans = 1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(solve(position,mid,m)){
                l = mid+1;
                ans = mid;
            }
            else{
                r = mid-1;
            }
        }
        return ans;
    }
};