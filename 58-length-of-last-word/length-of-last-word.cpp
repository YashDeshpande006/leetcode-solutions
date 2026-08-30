class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1;
        int count=0;
        bool isSpace=true;
        while(isSpace){
                if(s[i] !=' '){
                    isSpace=false;
                }
                else i--;
            }
        for(i;i>=0;i--){
            
            if(s[i] !=' '){
            count++;
            }
            else{
                break;
            }

            
        }
        return count;
    }
};