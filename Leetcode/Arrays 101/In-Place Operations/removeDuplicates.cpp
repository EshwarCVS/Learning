class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 2){return nums.size();}
        auto head=nums.begin();
        auto it=nums.begin();
        int i=1;
        while(it<nums.end()){
            if(*head == *it){
                it++;              
            }
            else if(*head < *it){
                head++;
                i++;
                *head = *it;
                it++;
            }
        }
        return i;
    }
};
