/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 */

// @lc code=start
#if 0 //初始版本
int reverse(int x){

    int tmp[11] = {0};
    int tmp_x;
    int i, j;
    long ret = 0;

    tmp_x = x;
    for(i = 0; tmp_x > 0; i++){
         tmp[i] = tmp_x % 10;   
         tmp_x /= 10;         
    }
    for(j = 0; j < i; j++){
         printf("tmp[%d] = %d\n" , j, tmp[j]);
        ret = ret * 10 + tmp[j];
    }
     printf("ret = %d", ret);

    if( (int)(ret) != ret){
        return 0;
    }

    return ret;
}
#endif

int reverse(int x){

    int tmp_x;
    int i;
    long ret = 0;

     tmp_x = x;
     for(i = 0; tmp_x != 0; i++){
        ret = (ret * 10) + tmp_x % 10;  
        tmp_x /= 10;      
     }

    if( (int)(ret) != ret){
        return 0;
    }
    
    return ret;

}
// @lc code=end

