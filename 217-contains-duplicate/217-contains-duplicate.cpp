class Solution {
public:
    bool containsDuplicate(vector<int>& n) {
        
        set<int> s;
        for(int i=0;i<n.size();i++)
        {
            s.insert(n[i]);
        }
        
        if(s.size()==n.size())
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }
};