// https://leetcode.com/explore/learn/card/array-and-string/204/conclusion/1182/
// Approach 1
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      k = k%nums.size();
      if(k==0 || nums.size()<2){}
      else{
        int count = 0;
        for(int head = 0; count < nums.size(); head++){
          int current = head;
          int prev = nums[head];
          do {
            int next = (current + k) % nums.size();
            cout<< count<< ":  "<<nums[next]<<"  "<< prev<< endl;
            int temp = nums[next];
            nums[next] = prev;
            prev = temp;
            current = next;
            count++;
          } while (head != current);
        }
      }
    }
};

// Approach 2
class Solution {
public:
    void reverse(vector<int>& s, int head, int tail){
      while(head < tail && head != tail){
        char temp =s[head];
        s[head]=s[tail];
        s[tail]=temp;
        head++;
        tail--;
      }
    }
    void rotate(vector<int>& nums, int k) {
      k = k%nums.size();
      if(k==0 || nums.size()<2){}
      else{
        reverse(nums, 0, nums.size() -1);
        reverse(nums, 0, k-1);
        reverse(nums, k, nums.size() -1);
      }
    }
};
