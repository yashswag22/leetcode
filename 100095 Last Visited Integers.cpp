#include<bits/stdc++.h>

class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        
        vector <int>v;
        vector<int>ans;
        vector<int>rev;
        int count =0;
        for(int i=0;i<words.size();i++)
        {
            string s = words[i];
            
            if(s!="prev")
            {
                int temp = stoi(s);
                v.push_back(temp);
                rev = v;
                reverse(rev.begin(),rev.end());
                count =0;
            }
            else
            {
                count++;
                if(count<=rev.size())
                ans.push_back(rev[count-1]);
                else
                    ans.push_back(-1);
            }
            
        }
        return ans;
       
    }
};
