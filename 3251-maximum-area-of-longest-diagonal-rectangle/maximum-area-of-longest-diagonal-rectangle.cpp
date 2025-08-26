class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();
        double diagonal = 0;
        int area = 0;
        for(int i=0;i<n;i++){
            double h = sqrt((dimensions[i][0]*dimensions[i][0])+(dimensions[i][1]*dimensions[i][1]));
            if(h > diagonal){
                diagonal = h;
                area =dimensions[i][0] * dimensions[i][1];
            }
            else if(h==diagonal){
                area = max(area,dimensions[i][0] * dimensions[i][1]);
            } 
        }
        return area;
    }
};