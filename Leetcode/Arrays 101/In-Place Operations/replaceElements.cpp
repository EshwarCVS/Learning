class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for (auto it = arr.end(); it != arr.begin(); it--) {
            if(it ==arr.end()){
                continue;
            }
            else{
                if(*it < *(it+1))
                *it = *(it+1);
            }
        }
        arr.erase(arr.begin());
        arr.push_back(-1);
        return arr;
    }
};
