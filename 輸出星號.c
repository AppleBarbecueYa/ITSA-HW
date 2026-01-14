#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num; // 輸入五位數
    
    // 讀取輸入 (例如: 23416)
    scanf("%d", &num);
    
    // 我們需要從左到右處理每一位數 (萬 -> 千 -> 百 -> 十 -> 個)
    // divisor (除數) 來控制目前要取的位數
    // 初始設為 10000，代表先取萬位數
    int divisor = 10000;
    
    // 使用 while 迴圈，每次處理完一個位數，就把除數 / 10
    while (divisor >= 1) {
        
        // 1. 取出當前位數的數字
        // 邏輯：(數字 / 除數) % 10
        int digit = (num / divisor) % 10;
        
        // 2. 根據取出的數字，印出對應數量的星星
        for (int i = 0; i < digit; i++) {
            printf("*");
        }
        
        // 3. 印完星星後要換行
        printf("\n");
        
        // 4. 準備處理下一位數，將除數縮小10倍
        divisor = divisor / 10;
    }

	return 0;
}