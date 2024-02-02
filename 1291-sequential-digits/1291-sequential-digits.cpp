class Solution {
    
public:
    
    void dfs(int low,int high,vector<int>&ans,int i,int num){
        if(num>=low&&num<=high){
            ans.push_back(num);           
        }
        if( i>9){
            return ;
        }
        
        dfs(low,high,ans,i+1,num*10+i);
        
    }
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        int num=0;
        for(int i =1;i<=9;i++){
            dfs(low,high,ans,i,num);
            sort(ans.begin(),ans.end());
        }
        return ans;
    }
};