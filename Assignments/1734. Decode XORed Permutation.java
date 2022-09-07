class Solution {
public int[] decode(int[] e) {
        int[] res = new int[e.length+1];
        for(int i = 0; i <= e.length+1; i++) {
            res[0] ^= i;
            if(i < e.length && i%2 == 1) res[0] ^= e[i];
        }

        for(int i = 1; i < res.length; i++)
            res[i] ^= res[i-1]^e[i-1];
        return res;
    }}