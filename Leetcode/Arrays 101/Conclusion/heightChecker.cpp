class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> heightUnsort = heights;
        sort(heights.begin(), heights.end());
        int counter = 0;
        auto it1 = heights.begin();
        auto it2 = heightUnsort.begin();
        while(it1<heights.end()){
            if(*it1 != *it2){
                counter++;
            }
            it1++;
            it2++;
        }
        return counter;
    }
};
