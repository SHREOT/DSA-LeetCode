class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
       int pivotIndex=0;
        while(pivotIndex<nums.size()){
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<pivotIndex;i++){
            leftsum=leftsum+nums[i];
        }
        for(int k=pivotIndex+1;k<nums.size();k++){
            rightsum=rightsum+nums[k];
        }
            
            if(leftsum==rightsum){
                return pivotIndex;
            }
            else{
                pivotIndex++;
            }
            }
        return -1;   
    }
};