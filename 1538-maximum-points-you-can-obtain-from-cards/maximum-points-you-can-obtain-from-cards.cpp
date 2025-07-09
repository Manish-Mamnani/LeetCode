class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int curr=0;
        for(int i=0;i<n-k;i++){
            curr+=cardPoints[i];
        }
        int total = 0;
        for(int i=0;i<n;i++){
            total += cardPoints[i];
        }
        int maxscore = 0;
        int i=0;
        int j=n-k-1;
        while(j<n){
            maxscore=max(maxscore,total-curr);
            curr -= cardPoints[i];
            i++;
            if(j<n-1)curr += cardPoints[j+1];
            j++;
        }
        return maxscore;
    }
};