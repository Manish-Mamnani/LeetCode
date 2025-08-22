class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int top = -1;
        int bottom = 0;
        int left = m;
        int right = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    if(top==-1){
                        top = i;
                    }
                    if(j<left){
                        left = j;
                    }
                    if(j>right){
                        right = j;
                    }
                    if(i>bottom){
                        bottom = i;
                    }
                }
            }
        }
        return (bottom-top+1) * (right-left+1);
    }
};