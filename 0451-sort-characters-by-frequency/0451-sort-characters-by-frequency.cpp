class Solution {
public:
    string frequencySort(string s) {
       map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;  
        }
        priority_queue<pair<int,char>>pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        string ans="";
        while(!pq.empty()){
          auto top=pq.top();
            ans.append(top.first,top.second);
            pq.pop();
        }
        return ans;
    }
};