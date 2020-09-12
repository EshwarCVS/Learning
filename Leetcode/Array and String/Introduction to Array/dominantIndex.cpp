class Solution {
public:
    int MAX(vector<int>& A){
        int max =-1;
        for (auto ir = A.begin(); ir != A.end(); ++ir) 
            if(max< *ir)
                max = *ir;
        return max;
    } 
    int dominantIndex(vector<int>& nums) {
        if(nums.size() < 2){ return 0;}
        int max = MAX(nums);
        int index = 0;
        auto ir = nums.begin();
        while(ir != nums.end()){
            if(max== *ir){
                break;
            }
            ++ir;
            index++;
        }
        sort(nums.begin(),nums.end());
        nums.pop_back();
        nums.pop_back();
        if((*nums.end())*2 > max)
                return -1;
        return index;
    }
};
