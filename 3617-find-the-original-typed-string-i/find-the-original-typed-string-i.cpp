class Solution {
public:
    int possibleStringCount(string word) {
        int count = 1;
        int n = word.size();
        int l = 0;
        while(l<n){
            int length = 0;
            while(l<n && word[l]==word[l+1]){
                length++;
                l++;
            }
            count += length;
            l++;
        }
        return count;
        
    }
};