class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if(strs.size()==1){
            return strs[0];
        }
        for(int i=0;i<strs.size();i++){
            if(strs[i].length()==0){
                return "";
            }
        }
        string res="";
        int j=0,k=0;
        bool flag=true;
        while(k<strs[0].length()){
            for(int i=0;i<strs.size()-1;i++){
                if(strs[i][j]==strs[i+1][j]){
                    continue;
                }else{
                    flag=false;
                    break;
                }
            }
            if(flag){
                res+=strs[0][j];
                j++;
            }
            k++;
        }
        return res;
    }
};