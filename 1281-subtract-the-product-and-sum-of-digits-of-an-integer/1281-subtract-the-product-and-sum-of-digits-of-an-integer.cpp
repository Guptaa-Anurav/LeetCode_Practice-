class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int x=n;
        int mp=1,sm=0;
        
        while(x>0)
        {
            int l=x%10;
            mp=mp*l;
            sm=sm+l;
            x=x/10;
        }
        
        return (mp-sm);
        
    }
};