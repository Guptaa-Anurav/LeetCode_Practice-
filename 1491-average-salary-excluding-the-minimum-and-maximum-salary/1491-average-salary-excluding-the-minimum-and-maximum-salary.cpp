class Solution {
public:
    double average(vector<int>& s) {
        
        double ans=0,mx=INT_MIN,mn=INT_MAX;
        
        for(double i=0;i<s.size();i++)
        {
            if(s[i]<mn)
            {
                mn=s[i];
            }
            
            if(s[i]>mx)
            {
                mx=s[i];
            }
            
            ans=ans+s[i];
            
        }
        
        ans=ans-mn-mx;
        ans=ans/(s.size()-2);
        return ans;
        
    }
};