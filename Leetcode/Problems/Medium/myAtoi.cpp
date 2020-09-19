// https://leetcode.com/problems/string-to-integer-atoi/

int myAtoi(char * str){
    int i = 0;
    int sign = 1;
    int result = 0;
    bool isNumber(char c){
        return (c >= '0' && c <= '9') ? true : false;
    }
     
    while(str[i] == ' ')
        i++;
    if(str[i] == '-' || str[i] == '+'){
        sign = 1 * ((str[i] == '-') ? (-1) : (1));
        i++;
    }
    
    while(isNumber(str[i])){
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && str[i] - '0' > 7)) { 
            if (sign == 1) 
                return INT_MAX; 
            else
                return INT_MIN; 
        }
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    return result * sign;
}
