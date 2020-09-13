class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        if(numRows == 0){return result;}
        vector<int> inter;
        inter.push_back(1);
        result.push_back(inter);
        for(int i=1; i<numRows; i++){
            vector<int> row;
            inter = result[i-1];
            row.push_back(1);
            for( int j = 1; j< i;j++){
                row.push_back(inter[j-1]+inter[j]);
            }
            row.push_back(1);
            result.push_back(row);
        }
        return result;
    }
};
