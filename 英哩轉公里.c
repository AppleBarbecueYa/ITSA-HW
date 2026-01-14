#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int miles; // 用來存放輸入的英哩數
    
    scanf("%d", &miles);
    
    // 1. 計算公里數
    // 公式：1 英哩 = 1.6 公里
    double km = miles * 1.6;
    
    // 2. 處理四捨五入 
    // 邏輯：先乘 10 -> 加 0.5 (做四捨五入) -> 轉整數切掉小數 -> 再除以 10.0 變回浮點數
    km = (int)(km * 10 + 0.5) / 10.0;
    
    // 3. 輸出結果
    // 題目要求格式： "km=" 接上數字
    // %.1f 代表強制印出一位小數
    printf("km=%.1f\n", km);

	return 0;
}