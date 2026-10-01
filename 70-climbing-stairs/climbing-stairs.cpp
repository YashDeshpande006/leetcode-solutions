class Solution {
public:
    int climbStairs(int n) {
        int prev2=1;
        int prev1=2;
        if(n==1){
            return 1;
        }
        else if(n==2){
            return 2;
        }
        
        else{
            for(int i=3;i<=n;i++){

                int current=prev2+prev1;
                prev2=prev1;
                prev1=current;
            }
        }
        return prev1;
    }
};