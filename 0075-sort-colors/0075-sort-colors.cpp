class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zerocount=0;
        int onecount=0;
        int twocount=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zerocount++;
                continue;
            }
             if(nums[i]==1){
                onecount++;
                continue;
                 
            } 
            if(nums[i]==2){
                twocount++;
                
                
            }
        }
        
        for(int i=0;i<zerocount;i++){
            nums[i]=0;
        }
        for(int i=0;i<onecount;i++){
            nums[zerocount]=1;
            zerocount++;
        }
        for(int i=0;i<twocount;i++){
            nums[zerocount]=2;
            zerocount++;
        }
    }
};