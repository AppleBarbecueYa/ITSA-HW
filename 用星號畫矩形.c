#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int m, n; // m 代表寬(列印星數)，n 代表高(列數)
    
    // 根據範例：輸入 2 3，代表 m=2, n=3
    scanf("%d %d", &m, &n);
    
    // 外層迴圈：控制「高度」，也就是要印幾列 (n)
    // 根據範例，n=3，這裡會跑 3 次
    for (int i = 0; i < n; i++) {
        
        // 內層迴圈：控制「寬度」，也就是這一列要印幾顆星星 (m)
        // 根據範例，m=2，這裡會跑 2 次
        for (int j = 0; j < m; j++) {
            printf("*"); // 印出一顆星星，不換行
        }
        
        // 當內層迴圈跑完（這一列的星星都印完後），就要換行
        printf("\n");
    }

	return 0;
}