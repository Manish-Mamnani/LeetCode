class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> result;
        int i=0;
        int j=0;
        while(true){
            while(i>=0 && j<m){
                result.push_back(mat[i][j]);
                i--;
                j++;
            }
            i++;
            j--;
            if(i==n && j==m) break;
            else{
                if(j<m-1) j++;
                else i++;
            }
            while(i<n && j>=0){
                result.push_back(mat[i][j]);
                i++;
                j--;
            }
            i--;
            j++;
            if(i==n && j==m) break;
            else{
                if(i<n-1) i++;
                else j++;
            }
        }
        return result;
    }
};