class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> temp;
        vector<int> inter;
        temp.clear();
        if( matrix.empty()){return temp;}
        int N = matrix.size();
        int M = matrix[0].size();
        for(int d=0; d<N+M-1; d++){
            inter.clear();
            int r = d < M ? 0 : d - M + 1;
            int c = d < M ? d : M - 1;
            while (r < N && c > -1) {    
                inter.push_back(matrix[r][c]);
                ++r;
                --c;
            }
            if (d % 2 == 0) {
                for (int i=inter.size()-1; i>=0; i--) {
                    temp.push_back(inter[i]);
                }
            }
            else{
                for (int i=0; i<inter.size(); i++) {
                    temp.push_back(inter[i]);
                }
            }
        }
        return temp;
    }
};
