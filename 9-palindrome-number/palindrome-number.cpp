class Solution {
public:
    bool isPalindrome(int x) {
        int copy_num=x;
        long int reverse=0;
        int digit=0;
        bool palindrome=false;

        while(x>0){
            digit=x%10;
            reverse=reverse*10+digit;
            x=x/10;
        }

        if(reverse==copy_num){
            return palindrome=true;
        }
        else{
            return palindrome=false;
        }

    }
};