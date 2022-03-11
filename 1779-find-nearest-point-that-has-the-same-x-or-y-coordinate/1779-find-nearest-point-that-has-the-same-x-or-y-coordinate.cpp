class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& p) {
        
        vector <pair<int,int>> v;
        
        for(int i=0;i<p.size();i++)
        {
            if(p[i][0]==x || p[i][1]==y)
            {
                int ans=abs(p[i][0]-x)+abs(p[i][1]-y);
                
                v.push_back(make_pair(ans,i));
            }
            
        }
        
        sort(v.begin(),v.end());
        if(v.size()==0)
        {
            return -1;
        }
        
        else
        {
            return v[0].second;
        }
        
        
    }
};