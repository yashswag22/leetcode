class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans ="";
        int sum =0;
        int prevcount=INT_MAX;
        int contcount=0;
       
        
         
        for(int i=0;i<s.size();i++)
        {    
            sum =0;
            int count =0;
            int j =i;
            while(sum <k  && j<s.size())
            {
                if(s[j]=='0')
                count++;
                else
                sum++;
     
                j++;
            }
             
             string temp = s.substr(i,k+count);

            if(count<prevcount && sum == k)
            ans = temp;
            else if(count== prevcount && sum ==k && temp < ans)
            ans = temp;
         
            prevcount = min(prevcount,count);
           
        }
        return ans;
    }
};
