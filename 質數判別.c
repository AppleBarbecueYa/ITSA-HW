#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n;
    
    // 讀取輸入 N
    scanf("%d", &n);
    
    // 特殊情況判斷
    //  1 不是質數，當然 0 或負數也不是
    if (n <= 1) {
        printf("NO\n");
        return 0;
    }
    
    int is_prime = 1; // 旗標：預設它是質數 (YES)
    
    // 核心邏輯：從 2 檢查到 sqrt(N)
    // 寫法技巧：用 i * i <= n 取代 i <= sqrt(n)
    // 注意：這裡將 i 宣告為 long long 是為了防止 i*i 超過 int 範圍導致溢位錯誤
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = 0; // 發現因數了！它不是質數
            break;        // 任務結束，提早跳出
        }
    }
    
    // 輸出結果
    if (is_prime) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

	return 0;
}