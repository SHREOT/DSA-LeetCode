class Solution {
public:
    int firstdigit(int k){
        
        if(k>10&&k<100){
          return k/10;
        }
        if(k>100&&k<1000){
            return k/100;
        }
        if(k>1000){
            return k/1000;
        }
        return k;
    }
    int countBeautifulPairs(vector<int>& nums) {
        int count =0;
      for(int i=0;i<nums.size();i++){
          for(int j=i+1;j<nums.size();j++){
              if(gcd(firstdigit(nums[i]),nums[j]%10)==1){
                  count++;
              }
          }
      }
        return count;
    }
};