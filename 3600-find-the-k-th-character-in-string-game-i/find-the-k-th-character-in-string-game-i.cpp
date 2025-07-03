class Solution {
public:
    char kthCharacter(int k) {
        string s= "a";
        while(s.size()<k){
            string temp = "";
            for(int i=0;i<s.length();i++){
                temp+=(s[i]+1);
            }
            cout<<temp<<endl;
            s.append(temp);
        }
        return s[k-1];
    }
};