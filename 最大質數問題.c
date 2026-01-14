#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n; // 用來存放輸入的數字
    
    // 讀取輸入
    scanf("%d", &n);
    
    // 從 N-1 開始往回找，直到 2
    // 因為題目要求 "小於此數" 的 "最大" 質數，所以從大往小找最快
    for (int i = n - 1; i >= 2; i--) {
        
        // --- 檢查 i 是不是質數 ---
        int is_prime = 1; // 先假設它是質數 (flag)
        
        // 嘗試用 2 到 (i-1) 去除它
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0; // 只要能被整除，就不是質數
                break;        // 不用再檢查後面的因數了
            }
        }
        
        // 如果檢查完畢 flag 還是 1，代表它是質數
        if (is_prime == 1) {
            printf("%d\n", i); // 印出這個質數
            break;             // 任務完成，跳出迴圈
        }
    }

	return 0;
}