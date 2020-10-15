/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */
#include <stdlib.h>
// @lc code=start

#define TURE     1
#define FALSE    0
/*
    step1: 转换为字符串;
    step2: 将字符从左到右倒转;
    step3: 对比倒转后是否相等;
*/

bool isPalindrome(int x){

    char str[64] = {0};
    int i = 0;
    int numOfchar = 0;

    if(x < 0){
        return FALSE;
    } else if ((!(x % 10)) && (x != 0)){
        return FALSE;
    }

    /*step1: 转换为字符串;*/
    while(x != 0){
        str[numOfchar] = '0' + x % 10;
        x /= 10;  
        numOfchar++;
    }
    str[numOfchar] = '\0';

    /*step2: 判断是否为回文*/
    while(str[i] != '\0'){
        if(str[i++] != str[--numOfchar]){           
            return FALSE;
        }
    }

    return TURE;
}

// @lc code=end

