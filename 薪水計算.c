#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int hours, rate; // 宣告變數：hours (工時), rate (時薪)
    
    // 讀取輸入
    scanf("%d %d", &hours, &rate);
    
    double salary = 0.0; // 用來存放總薪資
    
    // 依照分段規則計算薪水
    if (hours <= 60) {
        // 情況 1: 60 小時以內
        // 全部照原價算
        salary = hours * rate;
    } else if (hours <= 120) {
        // 情況 2: 61 ~ 120 小時之間
        // 前 60 小時算原價
        // 超過 60 的部分算 1.33 倍
        salary = 60 * rate + (hours - 60) * rate * 1.33;
    } else {
        // 情況 3: 121 小時以上
        // 前 60 小時算原價
        // 中間 60 小時 (61~120) 算 1.33 倍
        // 超過 120 的部分算 1.66 倍
        salary = 60 * rate + 60 * rate * 1.33 + (hours - 120) * rate * 1.66;
    }
    
    // 輸出結果
    // 題目要求：取至小數點以下第一位
    // 邏輯：乘以 10 -> 加 0.5 -> 取整數 -> 除以 10.0
    salary = (int)(salary * 10 + 0.5) / 10.0;
    
    printf("%.1f\n", salary);

	return 0;
}