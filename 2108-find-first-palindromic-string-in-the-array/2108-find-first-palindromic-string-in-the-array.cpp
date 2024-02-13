class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        
        for(int i=0;i<words.size();i++){
            stack<char>st;
            string temp =words[i];
            string ans="";
            for(int j=0;j<temp.length();j++){
                st.push(temp[j]);                
            }
            while(!st.empty()){
                char ch=st.top();
                st.pop();
                ans=ans+ch;
            }
            if(ans==temp){
                return ans;
                break;
            }
        }
        return "";
    }
};