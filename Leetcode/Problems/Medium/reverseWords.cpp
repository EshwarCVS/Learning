https://leetcode.com/problems/reverse-words-in-a-string/

class Solution {
public:
    string reverseWords(string s) {
        string aux;
        vector<string>st;
        stringstream a(s);
        while(a>>aux)
        {
            st.push_back(aux);
        }
        if(empty(st)) return "";
        s.clear();
        for(int i=st.size()-1;i>=1;i--)
        {
            s+=st[i]+" ";
        }
        s+=st[0];
        return s;
    }
};
