class Solution {
public:
    vector<int> sortedSquares(vector<int>& n) {
        
        for(int i=0;i<n.size();i++)
        {
            int x=n[i];
            n[i]=x*x;
        }
        sort(n.begin(),n.end());
        return n;
    }
};