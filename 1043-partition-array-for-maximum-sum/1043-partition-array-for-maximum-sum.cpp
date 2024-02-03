class Solution {
public:
    int ansfun(int index,vector<int>& arr,int k,vector<int>&dp){
        if(index>=arr.size()){
            return 0;
        }
        if(dp[index]!=-1) return dp[index];
        int len=0;
        int maxi = INT_MIN;
        int sum =INT_MIN;
        int ans =INT_MIN;
        for(int i=index;i<index+k&&i<arr.size();i++){
            len++;
              maxi= max(maxi,arr[i]);
            sum=  (len*maxi)+ansfun(i+1,arr,k,dp);
            ans =max(ans,sum);
        }
        return dp[index]=ans;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int>dp(arr.size(),-1);
        
          return ansfun(0,arr,k,dp);
    }
};