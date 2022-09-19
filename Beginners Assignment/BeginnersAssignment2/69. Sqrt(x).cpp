class Solution {
public:
int mySqrt(int x) {
long int n = 0;
while(n*n <= x){
n++;
}
return n-1;

    }
};