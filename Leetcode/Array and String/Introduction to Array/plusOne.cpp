// https://leetcode.com/explore/learn/card/array-and-string/201/introduction-to-array/1148/

class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        int size = arr.size();
        for (int i = size - 1; i >= 0; --i) {
            if (arr[i] == 9) {
                arr[i] = 0;
            } else {
                arr[i] = arr[i] + 1;
                break;
            }
        }

        if (!arr[0]) {
            arr.resize(++size);
            arr[0] = 1;
        }
        return arr;
    }
};
