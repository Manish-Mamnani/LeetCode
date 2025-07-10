class Solution {
public:
    // BRUTE FORCE
    // bool check(vector<int>& diff,int i){
    //     int n = diff.size();
    //     int sum = diff[i];
    //     int j = i+1;
    //     while((j%n)!=i){
    //         if(sum<0) return false;
    //         sum += diff[j%n];
    //         j++;
    //     }
    //     return true;
    // }
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // int n = gas.size();
        // int sum = 0;
        // vector<int> diff(n);
        // for(int i=0;i<n;i++){
        //     diff[i] = gas[i] - cost[i];
        //     sum += diff[i];
        // }
        // if(sum < 0) return -1;
        // for(int i=0;i<n;i++){
        //     if(diff[i]>0 && check(diff,i)) return i;
        // }
        // return 0;
        int n = gas.size();
        int tank = 0;
        int gassum = 0;
        int costsum = 0;
        int start = 0;
        for(int i=0;i<n;i++){
            gassum += gas[i];
            costsum += cost[i];
            tank += gas[i] - cost[i];
            if(tank<0){
                start = i+1;
                tank = 0;
            }
        }
        return (gassum - costsum < 0)? -1:start;
    }
};
