class Solution{
public:	

   
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    
	    int prev=arr[0];
        int prev2=0;
        int curr=0;
	    for(int index=1;index<n;index++){
	        int pick=arr[index];
	        if(index>1) pick+= prev2;
	        int notpick=0+prev;
	        curr=max(pick,notpick);
	        prev2=prev;
	        prev=curr;
	    }
	    return prev;
	    
	    // code here
	}
};

TC:O(n)
 SC:O(1)
