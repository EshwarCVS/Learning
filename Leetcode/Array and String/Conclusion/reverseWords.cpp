class Solution {
public:
    string reverseWords(string s) {
      if(s.size() < 2){return s;}
      int i=0;
      while(i< s.size() -1){
        int j =i;
        while(s[j+1] != ' ' && j < s.size()-1){
          j++;
        }
        int end = j;
        while(i < end){
          swap(s[i],s[end]);
          i++; end--;
        }
        i = j + 2;
      }
      return s;
    }
};
