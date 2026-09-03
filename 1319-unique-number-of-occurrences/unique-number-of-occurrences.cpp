class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int count[2001]={0};
        for(int i=0;i<arr.size();i++){
            count[arr[i]+1000]++;
        }

        for(int i=0;i<2001;i++){
            if(count[i]>0){
                for(int j=i+1;j<2001;j++){
                    if(count[i]==count[j]){
                        return false;
                    }
                }
            }

        }
        return true;
    }
};