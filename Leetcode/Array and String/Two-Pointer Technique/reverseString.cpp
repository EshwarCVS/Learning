class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size() >= 2){
            int head = 0;
            int tail = s.size()-1;
            while(head < tail && head != tail){
                char temp =s[head];
                s[head]=s[tail];
                s[tail]=temp;
                head++;
                tail--;
            }
        }
    }
};
