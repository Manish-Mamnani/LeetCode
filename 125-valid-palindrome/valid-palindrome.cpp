class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int l = 0;
        int r = n-1;
        while(l<=r){
            if(!isalnum(s[l])){
                l++;
                continue;
            }
            if(!isalnum(s[r])){
                r--;
                continue;
            }
            s[l] = tolower(s[l]);
            s[r] = tolower(s[r]);
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};