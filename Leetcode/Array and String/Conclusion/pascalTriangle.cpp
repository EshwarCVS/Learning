// https://leetcode.com/explore/learn/card/array-and-string/204/conclusion/1171/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
      vector<int> result;
      result.push_back(1);
      if(rowIndex==0){return result;}
      result.push_back(1);
      if(rowIndex==1){return result;}
      for(int i = 2; i<= rowIndex;i++){
        int last = result.size() - 1;
        int prev = last -1;
        while(prev >= 0){
          result[last] += result[prev];
          last --; 
          prev --;
        }
        result.push_back(1);
      }
      return result;
    }
};
