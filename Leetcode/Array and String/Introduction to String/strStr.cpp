class Solution {
public:
    int strStr(string haystack, string needle) {
        int i =0;
        int j =0;
        if(needle.size() ==0){
            return 0;
        }
        while(i<haystack.size()){
            if(haystack[i]==needle[j]){
               ++j;
            }else {
                i=i-j;
                j =0;
            }
            if(j ==needle.size() ){
                return i-needle.size()+1;
            }
            ++i;
        }
        return -1;
    }
};
