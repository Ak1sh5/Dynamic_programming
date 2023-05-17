 int func(int *arr,int index,vector<int>&dp){
        if(index==0) return arr[index];
        if(index<0) return 0;
        if(dp[index]!=-1)return dp[index];
        int pick=arr[index]+func(arr,index-2,dp);
        int notpick=0+func(arr,index-1,dp);
        
        return dp[index]=max(pick,notpick);
    }
Time Complexity: O(N)
Reason: The overlapping subproblems will return the answer in constant time O(1). 
  Therefore the total number of new subproblems we solve is ‘n’. Hence total time complexity is O(N).

Space Complexity: O(N)
Reason: We are using a recursion stack space(O(N)) and an array (again O(N)). Therefore total space complexity will be O(N) + O(N) ≈ O(N)
