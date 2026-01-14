#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int p; // 用來存放購買件數
    
    // 讀取件數
    scanf("%d", &p);
    
    int total = 0; // 用來存放總金額
    
    // 依照數量判斷折扣
    // 從「數量大」的開始判斷，邏輯會比較順
    if (p >= 100) {
        // 100 件以上 -> 打 7 折 (每件 70 元)
        // 100 * 0.7 = 70
        total = p * 70;
    } else if (p >= 30) {
        // 30 ~ 99 件 -> 打 8 折 (每件 80 元)
        // 100 * 0.8 = 80
        total = p * 80;
    } else if (p >= 10) {
        // 10 ~ 29 件 -> 打 9 折 (每件 90 元)
        // 100 * 0.9 = 90
        total = p * 90;
    } else {
        // 10 件以下 -> 原價 (每件 100 元)
        total = p * 100;
    }
    
    // 輸出總金額
    printf("%d\n", total);

	return 0;
}