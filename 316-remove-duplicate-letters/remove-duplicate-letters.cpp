class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]] = i;
        }
        stack<char> st;
        unordered_set<char> vis;
        for(int i=0;i<s.size();i++){
            if(vis.find(s[i])!=vis.end()) continue;
            while(!st.empty() && st.top()>s[i] && i<mp[st.top()]){
                vis.erase(st.top());
                st.pop();
            }
            vis.insert(s[i]);
            st.push(s[i]);
        }
        string temp = "";
        while(!st.empty()){
            temp = st.top()+temp;
            st.pop();
        }
        return temp;
    }
};