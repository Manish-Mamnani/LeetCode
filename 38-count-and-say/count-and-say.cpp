class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        while(n>1){
            int count = 1;
            string temp = "";
            for(int i=1;i<s.length();i++){
                if(s[i]==s[i-1]){
                    count++;
                }
                else{
                    char c = '0'+count;
                    temp+=c;
                    temp+=s[i-1];
                    count = 1;
                }
            }
            char d = '0'+count;
            temp+=d;
            temp+=s[s.length()-1];
            s=temp;
            n--;
        }
        return s;
    }
};