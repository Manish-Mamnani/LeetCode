class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        long long sum = 0;
        long long x = 0;
        long long place = 1;

        while(n > 0){
            int d = n % 10;
            if(d != 0){
                sum += d;
                x = (d*place) + x;
                place *= 10;
            } 
            n = n/10;
        }

        x = x*sum;
        return x;
    }
};