class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        long long sum = 0;
        long long x = 0;
        long long count = 0;

        while(n > 0){
            int d = n % 10;
            if(d != 0){
                sum += d;
                x = (d*(pow(10,count))) + x;
                count++;
            } 
            n = n/10;
        }

        x = x*sum;
        return x;
    }
};