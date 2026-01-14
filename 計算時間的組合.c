#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int total_seconds; // 用來存放輸入的總秒數
    
    // 讀取輸入
    scanf("%d", &total_seconds);
    
    // 題目要求使用符號常數表示時間單位
    // 我們先定義好這些換算基準
    const int SEC_IN_MIN = 60;
    const int SEC_IN_HOUR = 60 * 60;      // 3600
    const int SEC_IN_DAY = 24 * 60 * 60;  // 86400
    
    // 1. 計算天數 (Days)
    // 總秒數除以一天的秒數，整數部分就是天數
    int days = total_seconds / SEC_IN_DAY;
    
    // 算出剩下多少秒還沒分配 (取餘數)
    int remaining = total_seconds % SEC_IN_DAY;
    
    // 2. 計算小時 (Hours)
    // 用剩下的秒數除以一小時的秒數
    int hours = remaining / SEC_IN_HOUR;
    
    // 更新剩下的秒數
    remaining = remaining % SEC_IN_HOUR;
    
    // 3. 計算分鐘 (Minutes)
    // 用剩下的秒數除以一分鐘的秒數
    int minutes = remaining / SEC_IN_MIN;
    
    // 4. 計算秒數 (Seconds)
    // 最後剩下的就是秒數
    int seconds = remaining % SEC_IN_MIN;
    
    // 5. 輸出結果
    // 依照題目範例格式換行印出
    printf("%d days\n", days);
    printf("%d hours\n", hours);
    printf("%d minutes\n", minutes);
    printf("%d seconds\n", seconds);

	return 0;
}