/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */

// @lc code=start


char * longestCommonPrefix(char ** strs, int strsSize)
{
    char *empty = " ";
    int i = 0, j;
    int commfixNum = 0;
    int exit_flag = 0;


    for(j = 0; *(strs[0] + j)!= '\0'; j++){
        for(i = 0; i < strsSize - 1; i++){
            if(*(strs[i] + j) == '\0' || *(strs[i+1] + j) == '\0' \
                 || *(strs[i] + j) !=  *(strs[i+1] + j)  ){
                exit_flag = 1;
                break;
            }
        }
    

        if(1 == exit_flag){
            break;
        }

        commfixNum++; 

    }
    printf("i = %d\n",i);
    printf("commfixNum = %d\n", commfixNum);
    if(commfixNum == 0){
        return empty;
    }else{
        return empty;
    }

    
}
// @lc code=end





