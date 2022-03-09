class Solution {
public:
    int maxSubArray(vector<int>& n) {
        
        int csum=0,msum=0;
        
        for(int i=0;i<n.size();i++)
        {
            csum=csum+n[i];
            
            if(csum>msum)
            {
                msum=csum;
            }
            
            if(csum<0)
            {
                csum=0;
            }
        }
        
        int x=0;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]<0)
            {
                x++;
            }
        }
        
        if(x==n.size())
        {
            sort(n.begin(),n.end());
            return n[n.size()-1];
        }
        if(n.size()==1)
        {
            return n[0];
        }
        else
        {
            return msum;
        }
        
        return msum;
                
        
        
    }
};