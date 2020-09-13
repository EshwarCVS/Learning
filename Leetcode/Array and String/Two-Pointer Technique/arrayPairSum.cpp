class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        for(int i=0; i<(nums.size()/2); i++){
            sum += min(nums[2*i], nums[(2*i)+1]);
        }
        return sum;
    }
};
