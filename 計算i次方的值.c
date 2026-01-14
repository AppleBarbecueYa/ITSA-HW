#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n; //幾組測試數據
    
    scanf("%d", &n);
    
    // 使用迴圈執行 n 次
    for (int k = 0; k < n; k++) {
        int i; // 用來存放讀入的次方數
        scanf("%d", &i);
        
        // 判斷 i 是否超過 31
        if (i > 31) {
            // 題目要求：若 i > 31，輸出特定字串
            printf("Value of more than 31\n");
        } else {
            // 4. 使用位移運算計算 2 的 i 次方
            // 關鍵技巧：寫 "1u" 代表這是一個 "unsigned int" (無號整數) 的 1
            // 這樣電腦就會用無號整數的空間來運算，可以正確存下 2^31
            unsigned int result = 1u << i;  //左移 i 位
            
            // 輸出結果
            // %u 是用來印出 unsigned int 的格式符號
            printf("%u\n", result);
        }
    }

	return 0;
}