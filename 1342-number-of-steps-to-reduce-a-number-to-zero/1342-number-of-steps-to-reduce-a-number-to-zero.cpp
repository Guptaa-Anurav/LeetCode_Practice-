class Solution {
public:
    int numberOfSteps(int n) {
        int boob=0;
        while(n>0)
        {
            if(n%2==0)
            {
                n=n/2;
                boob++;
            }
            else
            {
                n--;
                boob++;
            }
        }
        return boob;
    }
};