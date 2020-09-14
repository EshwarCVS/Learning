// https://leetcode.com/explore/learn/card/array-and-string/204/conclusion/1165/
// using swap
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

// using reverse
class Solution {
public:
    string reverseWords(string s) {
      if(s.size() < 2){return s;}
      int i=0, j;
      while(i< s.size()){
        j =i + 1;
        while(s[j] != ' ' && j < s.size())
          j++;
        reverse(begin(s)+i, begin(s)+j);
        i = j + 1;
      }
      return s;
    }
};
