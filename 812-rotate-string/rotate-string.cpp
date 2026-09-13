class Solution {
public:
    bool rotateString(string s, string goal) {
        int i=0;
        int j=1;
        char temp=s[0];
        for(int k=0;k<s.length();k++){
            temp=s[0];
            j=1;
            i=0;
            for(j;j<s.length();j++){
                s[i]=s[j];
                i++;  
            }
            s[j-1]=temp;
            if(s==goal){
                return true;
                break;
            }
        } 
        return false;
    }
};