#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n; // 幾組測試案例
    
    // 接下來會有 n 行資料要處理
    scanf("%d", &n);
    
    // 使用迴圈執行 n 次
    for (int i = 0; i < n; i++) {
        int a, b; // 要相加的數字

        scanf("%d %d", &a, &b);
        
        // 計算總和並輸出
        // 要換行
        printf("%d\n", a + b);
    }

	return 0;
}