#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int h1, m1; // 開始時間 (時、分)
    int h2, m2; // 結束時間 (時、分)
    
    // 讀取兩行輸入
    // 第一行: 開始時間
    scanf("%d %d", &h1, &m1);
    // 第二行: 結束時間
    scanf("%d %d", &h2, &m2);
    
    // 1. 將時間全部轉換成分鐘數，計算總停車時間
    int start_total = h1 * 60 + m1;
    int end_total = h2 * 60 + m2;
    int duration = end_total - start_total; // 總分鐘數
    
    // 2. 計算計費單位 (有幾個半小時)
    // C 語言整數除法會自動無條件捨去，符合「未滿半小時不計費」的規則
    int units = duration / 30;
    
    int fee = 0; // 總費用
    
    // 3. 依照分段規則計算費用
    if (units <= 4) {
        // 情況 A: 停車 2 小時以內 (4 個半小時以內)
        // 全部都算 30 元
        fee = units * 30;
    } else if (units <= 8) {
        // 情況 B: 停車 2 ~ 4 小時之間 (5 ~ 8 個半小時)
        // 前 4 個單位算 30 元 (共 120 元)
        // 剩下 (units - 4) 個單位算 40 元
        fee = 120 + (units - 4) * 40;
    } else {
        // 情況 C: 停車超過 4 小時 (9 個半小時以上)
        // 前 4 個單位算 30 元 (共 120 元)
        // 中間 4 個單位算 40 元 (共 160 元) -> 加起來 280 元
        // 剩下 (units - 8) 個單位算 60 元
        fee = 280 + (units - 8) * 60;
    }
    
    // 輸出結果
    printf("%d\n", fee);

	return 0;
}