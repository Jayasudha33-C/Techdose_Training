class Solution {
public:
	int countHousePlacements(int n) {
		if(n == 1) return 4;
		if(n == 2) return 9;
		int a = 3,b = 2;
		n-=2;
		while(n){
			int t = (a+b)%((long)1e9+7);
			b = a;
			a = t;
			n--;
		}
		return (a%((long)1e9+7))*(a%((long)1e9+7))%((long)1e9+7);
	}
};