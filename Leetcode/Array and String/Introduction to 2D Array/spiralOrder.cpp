class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if(matrix.empty()){return result;}
        int t=0,b=matrix.size()-1,l=0,r=matrix[0].size()-1;
        int dir = 0;
        while(t<=b && l<=r){
            if(dir==0){//left to right
                for(int i=l;i<=r;i++){
                    result.push_back(matrix[t][i]);
                }
                t++; dir=1; continue;
            }
            if(dir==1){//top to bottom
                for(int i=t;i<=b;i++){
                    result.push_back(matrix[i][r]);
                }
                r--; dir=2;continue;
            }
            if(dir==2){//right to left
                for(int i=r;i>=l;--i){
                    result.push_back(matrix[b][i]);
                }
                b--; dir=3;continue;
            }
            if(dir==3){//bottom to top
                for(int i=b;i>=t;--i){
                    result.push_back(matrix[i][l]);
                }
                l++; dir=0;continue;
            }
        }
        for(auto itr=result.begin(); itr!=result.end(); itr++)
            cout<<*itr<<"\t";
        return result;
    }
};
