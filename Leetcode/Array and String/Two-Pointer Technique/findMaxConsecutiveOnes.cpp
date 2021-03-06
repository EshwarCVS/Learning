// https://leetcode.com/explore/learn/card/array-and-string/205/array-two-pointer-technique/1299/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max =-1, temp=0;
        for (auto it = nums.begin(); it != nums.end(); it++) {
            if(*it == 0){
                if(temp>max)
                    max=temp;
                temp=0;    
            }
            else{
                temp++;
                }
        }
        if(temp>max){
            max=temp;
        }
        return max;
    }
};
