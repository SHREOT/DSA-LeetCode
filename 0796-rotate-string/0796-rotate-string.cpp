class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        
        queue<char>sq;
        queue<char>gq;
        for(int i=0;i<s.length();i++){
            sq.push(s[i]);
            gq.push(goal[i]);  
        }
        for(int i=0;i<s.length();i++){
            char ch = sq.front();
            sq.pop();
            sq.push(ch);
            if(sq==gq){
                return true;
            }
        }
        return false;
    }
};