    int calculating_cost(vector<int>& height, int index, int k,vector<int> &dp){
        if(index==0) return 0;
        if(dp[index]!=-1) return dp[index];
        int min_steps=INT_MAX;
        for(int j=1;j<=k;j++){
            if(index-j>=0){
                int jump=calculating_cost(height,index-j,k,dp)+abs(height[index]-height[index-j]);
                min_steps=min(min_steps,jump);
            }
        }
        return dp[index]=min_steps;
    }

TC:O(n)*k
SC: O(N)
