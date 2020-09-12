class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() < 2){}
        auto head=nums.begin();
        auto it=nums.begin();
        it++;
        int temp;
        while(it<nums.end()){
            if(head==it){
                it++;
            }
            else if(*head == 0){
                swap(*head,*it);
                *it++;
            }
            else{
                head++;
            }
        }
    }
};
