class Solution {
public:
    bool minim(vector<int>& nums,int mid,int d){
        int sum = 0;
        int count = 1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>mid){
                count++;
                sum = nums[i];
            }
        }
        return count<=d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int lo = *max_element(weights.begin(),weights.end());
        int hi = accumulate(weights.begin(),weights.end(),0);
        while(hi-lo>1){
            int mid = lo + (hi-lo)/2;
            if(minim(weights,mid,days)) hi = mid;
            else lo=mid+1;
        }
        if(minim(weights,lo,days)) return lo;
        else return hi;
    }
};