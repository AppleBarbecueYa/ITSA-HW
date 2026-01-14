#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int n; // 用來存放票價 N
    
    // 讀取輸入
    scanf("%d", &n);
    
    // 1. 計算 10 元硬幣數量
    // 使用整數除法，算出有幾個 10
    int num_10 = n / 10;
    
    // 更新剩下的錢
    // 取餘數 (%) 運算，算出扣掉 10 元後還剩多少
    n = n % 10; 
    
    // 2. 計算 5 元硬幣數量
    // 看剩下的錢裡面有幾個 5
    int num_5 = n / 5;
    
    // 更新剩下的錢
    n = n % 5;
    
    // 3. 計算 1 元硬幣數量
    // 剩下的錢一定小於 5，全部都是 1 元
    int num_1 = n;
    
    // 4. 輸出結果
    printf("NT10=%d\n", num_10);
    printf("NT5=%d\n", num_5);
    printf("NT1=%d\n", num_1);

	return 0;
}