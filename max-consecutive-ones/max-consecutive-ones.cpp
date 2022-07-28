class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& n) {
        int boob=0,ans=0;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]==1)
            {
                boob++;
            }
            else
            {
                ans=max(ans,boob);
                boob=0;
            }
        }
                        ans=max(ans,boob);

        return ans;
    }
};