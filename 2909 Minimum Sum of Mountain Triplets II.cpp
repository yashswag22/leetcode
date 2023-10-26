#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
         vector<int>leftmin;
        vector<int>rightmin(n,0);
        leftmin.push_back(0);
        leftmin.push_back(nums[0]);
        for(int i=1;i<n-1;i++)
        {
            if(nums[i]<leftmin[i])
                leftmin.push_back(nums[i]);
            else
                leftmin.push_back(leftmin[i]);
        }
        // for(int i =0;i<leftmin.size();i++)
        //     cout<<leftmin[i]<<" ";
        // cout<<endl;

        rightmin[n-1]=0;
        rightmin[n-2]= nums[n-1];
        for(int i=n-2;i>0;i--)
        {
        	if(nums[i]<rightmin[i])
        		rightmin[i-1]=nums[i];
        	else
        		rightmin[i-1]=rightmin[i];
        }

        // for(int i =0;i<rightmin.size();i++)
        //     cout<<rightmin[i]<<" ";
        int ans = INT_MAX;
        for(int i =1;i<n-1;i++)
        {
        	if(leftmin[i]<nums[i] && rightmin[i]< nums[i])
        		ans = min(ans,(leftmin[i]+nums[i]+rightmin[i]));
        }
        
        if(ans == INT_MAX)
            return -1;
        else
            return ans;
    }
};
