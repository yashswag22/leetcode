class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        
        
        vector<string>ans;
        int prev = groups[0];
        ans.push_back(words[0]);
        for(int i=1;i<groups.size();i++)
        {
            if(prev != groups[i]){
                ans.push_back(words[i]);
                prev = groups[i];
            }
        }
        return ans;
    }
};
