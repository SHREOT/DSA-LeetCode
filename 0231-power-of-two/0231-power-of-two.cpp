class Solution {
public:
     bool isPower(int& n,int i){
         
         if(n%2!=0&&n>1){
             return false;
         }
         if(pow(2,i)>n){
             return false;
         }

         if(pow(2,i)==n){
             return true;
         }
         
         return isPower(n,i+1);

     }
    bool isPowerOfTwo(int n) {
        int i=0;


        if(isPower(n,i)){
            return true;
        }
        else{
            return false;
        }
    }
};