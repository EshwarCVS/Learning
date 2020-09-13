class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i =0;
        int j = numbers.size() - 1;
        vector<int> result;
        int currSum;
        while(i < j){
            currSum = numbers[i] + numbers[j];
            if(currSum == target){
                result.push_back(i+1);
                result.push_back(j+1);
                return result;
            }
            if(currSum < target){
                i++;
            }
            if(currSum > target){
                j--;
            }
        }
        return result;
    }
};
