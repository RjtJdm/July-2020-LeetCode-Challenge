class Solution {
public:
    int arrangeCoins(int n) {
    	if(n==0){
    		return 0;
    	}
        long long int i=0;
        int j=1;
        while(i+j<=n){
        	i=i+j;
        	j++;
        }
        return j-1;        
    }
};

/*
	*Can be alternatively Solved Using two methods:- 
	* 1. Using Formula [ (-1+sqrt(1+4*(n*2)))/2 ]
	* 2. Using Binary Search
*/
