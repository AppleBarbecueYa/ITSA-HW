#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n; // 用來存放總共有幾個數字
    
    scanf("%d", &n);
    
    int max_val; // 用來存放目前的最大值
    int x;       // 用來存放讀進來的數字
    
    // 先讀取第 1 個數字，直接當作目前的冠軍
    scanf("%d", &max_val);
    
    // 因為第 1 個已經讀過了，迴圈只需要跑 n-1 次 
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &x); // 讀取下一個數字
        
        // 擂台賽：挑戰者 x 跟目前冠軍 max_val 比
        if (x > max_val) {
            max_val = x; // 挑戰成功！換人當冠軍
        }
    }
    
    // 輸出最終的最大值
    printf("%d\n", max_val);

	return 0;
}