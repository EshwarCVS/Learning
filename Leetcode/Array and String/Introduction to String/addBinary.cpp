// https://leetcode.com/explore/learn/card/array-and-string/203/introduction-to-string/1160/

class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string ans;
        int a_idx = a.size() - 1;
        int b_idx = b.size() - 1;
        while(a_idx >= 0 || b_idx >= 0 || carry > 0){
        	int a_num = a_idx >= 0 ? Char2Num(a[a_idx]) : 0;
        	int b_num = b_idx >= 0 ? Char2Num(b[b_idx]) : 0;
        	a_idx--;
        	b_idx--;
        	switch(a_num + b_num + carry){
        	case 3:
        		ans.insert(0, 1, '1');
        		carry = 1;
        		break;
        	case 2:
        		ans.insert(0, 1, '0');
        		carry = 1;
        		break;
        	case 1:
        		ans.insert(0, 1, '1');
        		carry = 0;
        		break;
        	case 0:
        		ans.insert(0, 1, '0');
        		carry = 0;
        		break;
        	}
        }
        return ans;
    }

    int Char2Num(char chr){
    	if(chr == '1'){
    		return 1;
    	}
    	return 0;
    }
};
