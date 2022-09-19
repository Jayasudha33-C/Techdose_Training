class Solution {
public:
    int climbStairs(int n) {
    int t1 = 0;
    int t2 = 1;
    int res = 0;
    for(int i = 1; i<=n; i++) {
        res = t1 + t2;
        t1 = t2;
        t2 = res;
    }
    return res;
    }
};