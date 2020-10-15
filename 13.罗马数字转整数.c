/*
 * @lc app=leetcode.cn id=13 lang=c
 *
 * [13] 罗马数字转整数
 */

// @lc code=start


int romanToInt(char * ss){
    int result = 0;
    int subValue = 0;

    while (*ss){
        switch (*ss){
            case 'I':                     
                    result += 1;
                    break;
            case 'V':                     
                    result += (*(ss - subValue) == 'I') ? 3 : 5;
                    break;
            case 'X':
                    result += (*(ss - subValue) == 'I') ? 8 : 10;
                    break;
            case 'L':
                    result += (*(ss - subValue) == 'X') ? 30 : 50;
                    break;
            case 'C':
                    result += (*(ss - subValue) == 'X') ? 80 : 100;
                    break;
            case 'D':
                    result += (*(ss - subValue) == 'C') ? 300 : 500;
                    break;
            case 'M':
                    result += (*(ss - subValue) == 'C') ? 800 : 1000;
                    break;   
        }
        subValue = 1;
        ss++;       
    }

    return result;
}
// @lc code=end

