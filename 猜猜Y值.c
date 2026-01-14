#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n; // 用來存放總共有幾筆資料
    
    scanf("%d", &n);
    
    int x; // 用來存放每次讀到的 x 值
    
    // 執行 n 次迴圈
    for (int i = 0; i < n; i++) {
        // 讀取每一行的 x
        scanf("%d", &x);
        
        int y; // 用來存放結果 y
        
        // 判斷條件: 50 <= x <= 70 (包含)
        if (x >= 50 && x <= 70) {
            y = x;   // 符合範圍，y 就是 x
        } else {
            y = 100; // 不符合範圍，y 設為 100
        }
        
        // 輸出 y 並換行
        printf("%d\n", y);
    }

	return 0;
}