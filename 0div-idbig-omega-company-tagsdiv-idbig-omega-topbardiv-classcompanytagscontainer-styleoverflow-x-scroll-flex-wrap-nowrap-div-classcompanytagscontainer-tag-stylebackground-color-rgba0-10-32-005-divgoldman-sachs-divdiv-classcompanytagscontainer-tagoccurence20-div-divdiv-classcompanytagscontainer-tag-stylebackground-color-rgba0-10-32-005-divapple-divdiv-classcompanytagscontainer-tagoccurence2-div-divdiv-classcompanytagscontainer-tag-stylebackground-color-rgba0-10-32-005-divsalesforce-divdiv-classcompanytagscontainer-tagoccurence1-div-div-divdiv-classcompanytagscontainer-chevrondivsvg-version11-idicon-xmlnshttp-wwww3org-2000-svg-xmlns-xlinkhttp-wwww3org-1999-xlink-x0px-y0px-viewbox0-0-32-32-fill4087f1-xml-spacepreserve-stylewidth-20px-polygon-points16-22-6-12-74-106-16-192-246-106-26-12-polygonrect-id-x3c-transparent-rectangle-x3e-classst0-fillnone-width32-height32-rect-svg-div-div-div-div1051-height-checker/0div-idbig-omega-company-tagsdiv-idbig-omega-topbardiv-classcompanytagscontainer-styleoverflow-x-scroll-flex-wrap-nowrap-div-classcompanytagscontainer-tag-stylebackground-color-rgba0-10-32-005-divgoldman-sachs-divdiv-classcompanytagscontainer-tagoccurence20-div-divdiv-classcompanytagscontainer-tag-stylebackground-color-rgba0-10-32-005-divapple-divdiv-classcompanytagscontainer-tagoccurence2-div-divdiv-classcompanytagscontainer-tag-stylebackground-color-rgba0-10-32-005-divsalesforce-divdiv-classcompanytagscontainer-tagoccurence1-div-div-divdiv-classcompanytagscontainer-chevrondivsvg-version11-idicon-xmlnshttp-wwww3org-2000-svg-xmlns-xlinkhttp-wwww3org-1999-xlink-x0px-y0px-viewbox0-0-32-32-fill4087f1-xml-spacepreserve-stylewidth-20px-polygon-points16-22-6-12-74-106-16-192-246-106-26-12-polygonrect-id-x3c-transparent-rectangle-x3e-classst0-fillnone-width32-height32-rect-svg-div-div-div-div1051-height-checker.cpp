class Solution {
public:
    int heightChecker(vector<int>& heights) {
        //here we are using bubble sort
        vector<int>arr=heights;
        int n=heights.size();
        for(int round=1;round<n;round++){
            for(int j=0;j<=n-round-1;j++){
                if(heights[j]>heights[j+1]){
                    swap(heights[j],heights[j+1]);
                }
            }
        }
        
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=heights[i]){
                count++;
            }
        }
        return count;
    }
};