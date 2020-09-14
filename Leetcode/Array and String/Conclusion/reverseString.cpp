// https://leetcode.com/explore/learn/card/array-and-string/204/conclusion/1164/
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
