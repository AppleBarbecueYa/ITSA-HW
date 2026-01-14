#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n; // 幾組測試
    
    // 有 n 行資料要處理
    scanf("%d", &n);
    
    // 使用迴圈執行 n 次
    for (int i = 0; i < n; i++) {
        int x, y; // 宣告兩個變數來放輸入的數字
        
        // 讀取這一行的兩個整數
        scanf("%d %d", &x, &y);
        
        // 步驟 A: 先算出兩數之和
        int sum = x + y;
        
        // 步驟 B: 算出和的平方 
        int result = sum * sum;
        
        // 輸出結果並換行
        printf("%d\n", result);
    }

	return 0;
}