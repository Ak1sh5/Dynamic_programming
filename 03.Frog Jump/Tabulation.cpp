class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        vector<int>dp(n,-1);
        int prev1=0;
        int prev2=0;
        for(int i=1;i<n;i++){
            int one_step= prev1 + abs(height[i]-height[i-1]);
            
            int two_step=INT_MAX;
            if(i>1){
                two_step= prev2+ abs(height[i]-height[i-2]);
                
            } 
          
            prev2=prev1;
            prev1=min(one_step,two_step);
        }
        return prev1;
    }
};

TC:O(n)
SC:O(1)
