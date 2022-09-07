class Solution {
    public int hammingDistance(int x, int y) {
    int c=x^y;
    return Integer.bitCount(c);
    }}
