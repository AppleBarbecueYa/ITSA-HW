#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n; //幾組測試數據
    
    scanf("%d", &n);
    
    // 使用迴圈執行 n 次
    for (int i = 0; i < n; i++) {
        int m; // 用來存放讀入的整數 M
        
        // 讀取這一行的整數 M
        scanf("%d", &m);
        
        // 3. 計算並輸出結果
        // 格式要求： 原數 平方值 立方值 (中間用空白隔開)
        printf("%d %d %d\n", m, m * m, m * m * m);
    }

	return 0;
}