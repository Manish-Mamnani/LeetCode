class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>> v(numRows,vector<char>(s.length(),'*'));
        int it = 0;
        int i = 0;
        while(it<s.length()){
            for(int k=0;k<numRows && it<s.length() ;k++){
                v[k][i] = s[it];
                it++;
            }
            i++;
            for(int k=numRows-2;k>0 && it<s.length();k--){
                v[k][i++] = s[it];
                it++;
            }
        }
        string a = "";
        for(int z=0;z<numRows;z++){
            for(int y=0;y<s.length();y++){
                if(v[z][y]!='*') a += v[z][y]; 
            }
        }
        return a;
    }
};