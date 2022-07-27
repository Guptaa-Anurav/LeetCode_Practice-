class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int ans=INT_MIN;
        for(int i=0;i<a.size();i++)
        {
            int sum=0;
            for(int j=0;j<a[i].size();j++)
            {
                sum+=a[i][j];
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};