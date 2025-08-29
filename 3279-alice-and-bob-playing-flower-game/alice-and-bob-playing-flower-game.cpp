class Solution {
public:
    long long flowerGame(int n, int m) {
        int nodd,neven,modd,meven;

        if(n%2!=0){
            nodd = (n/2) + 1;
            neven = n - nodd;
        }
        else{
            nodd = n/2;
            neven = n - nodd;
        }
        if(m%2!=0){
            modd = (m/2) + 1;
            meven = m - modd;
        }
        else{
            modd = m/2;
            meven = m - modd;
        }
        long long ans = 1LL*neven*modd + 1LL*meven*nodd;
        return ans;
    }
};