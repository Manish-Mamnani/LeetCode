class Solution {
public:
    string check(string s,int i){
        int l = i-1;
        int r = i+1;
        while(r<s.length() && s[r]==s[i]){
            r++;
        }
        while(l>=0 && r<s.length() && s[l]==s[r]){
            l--;
            r++;
        }
        int length = (r-l-1);
        return s.substr(l+1,length);
    }
    string longestPalindrome(string s) {
        string max = "";
        max += s[0];
        for(int i=0;i<s.length()-1;i++){
            string temp = check(s,i);
            if(temp.length()>max.length()) max = temp;
        }
        return max;
    }
};