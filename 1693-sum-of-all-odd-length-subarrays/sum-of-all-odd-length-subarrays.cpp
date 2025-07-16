class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        vector<int> prefix(n);
        prefix[0] = arr[0];
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(i>0) prefix[i] = arr[i]+prefix[i-1];
        }
        int window = 3;
        while(window<=n){
            int j = window-1;
            sum += prefix[j];
            j++;
            while(j<n){
                sum += prefix[j] - prefix[j-window];
                j++;
            }
            window += 2;
        }
        return sum;
    }
};