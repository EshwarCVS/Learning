// https://leetcode.com/problems/divide-two-integers/submissions/
// Partial solution

class Solution {
public:
    int divide(int dividend, int divisor) {
        int i =0;
        short sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1; 
        if(dividend <= INT_MIN && divisor == -1)
            return INT_MAX;
        if(dividend <= INT_MIN && divisor == 1)
            return INT_MIN;
        dividend = abs(dividend); 
        divisor = abs(divisor);
        while(dividend >= divisor){
            if (i == INT_MAX) { 
                if (sign == 1) 
                    return INT_MAX; 
                else
                    return INT_MIN; 
            }
            dividend -= divisor;
            i++;
        }
        return sign * i;
    }
};
