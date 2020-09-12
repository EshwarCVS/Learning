class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
int n= nums.size();
        for (int i=0;i<n;++i){ // loop 1
            while(nums[i] != nums[nums[i]-1]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        vector<int> res;
        for (int i=1;i<=n;++i){
            if (i != nums[i-1]) res.push_back(i);
        }
        return res;
    }
};
