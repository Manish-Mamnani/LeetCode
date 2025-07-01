class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i = 1;
        while(arr[i-1]<=arr[i]){
            i++;
        }
        return i-1;
    }
};