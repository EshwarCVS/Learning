class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(auto itr=nums.begin(); itr!=nums.end();itr++){
            sum += *itr;
        }
        int currSum = sum;
        int inSum = 0;
        int i = 0;
        for(auto itr=nums.begin(); itr!=nums.end();itr++){
            currSum -= *itr;
            if(currSum == inSum){
                return i;
            }
            inSum += *itr;
            i++;
        }
        return -1;
    }
};
