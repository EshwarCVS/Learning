class Solution {
public:
    int MAX(vector<int>& A){
        int max =-1;
        for (auto ir = A.begin(); ir != A.end(); ++ir) 
            if(max< *ir)
                max = *ir;
        return max;
    }
    int thirdMax(vector<int>& nums) {
        if(nums.size() < 3){return MAX(nums);}
        sort(nums.begin(), nums.end());
        set <int, greater <int> > s1;
        for (auto itr = nums.begin(); itr != nums.end(); ++itr) 
        {
            s1.insert(*itr);
        }
        auto itr = s1.begin();
        if(s1.size() < 3){
            return *itr;
        }
        itr++;
        itr++;
        return *itr;
    }
};
