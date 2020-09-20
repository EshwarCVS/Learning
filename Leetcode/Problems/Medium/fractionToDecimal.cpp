//  https://leetcode.com/problems/fraction-to-recurring-decimal/

class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(numerator == 0)  return "0";
        vector <char> ans;
        if(numerator < 0 && denominator > 0 || numerator > 0 && denominator < 0)    ans.push_back('-');
        long dividend = labs(numerator);
        long divisor = labs(denominator);
        long remainder = dividend % divisor;
        string inter = to_string(dividend/divisor);
        for(int i = 0; i < inter.size(); i++)
            ans.push_back(inter[i]);
        if(remainder == 0)
            return string(ans.begin(), ans.end());
        ans.push_back('.');
        map <int, int> m;
        while(remainder != 0){
            if(m.find(remainder)!=m.end()){
                ans.insert(ans.begin() + m[remainder], '(');
                ans.push_back(')');
                break;
            }else{
                m[remainder] = ans.size();
                remainder *= 10;
                ans.push_back((remainder / dividend) + '0');
                remainder %= dividend;
            }
        }
        return string(ans.begin(), ans.end());
    }
};
