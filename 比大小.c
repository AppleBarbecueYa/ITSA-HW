#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // 三個整數
    int a, b, c;
    
    // 讀取三個整數，中間用空白隔開
    scanf("%d %d %d", &a, &b, &c);
    
    // 1. 先假設第一個數字 a 是目前最大的 (max)
    int max = a;
    
    // 2. 讓 b 來挑戰
    // 如果 b 比目前的 max 還大，那 max 就換人做 (變成 b)
    if (b > max) {
        max = b;
    }
    
    // 3. 讓 c 來挑戰
    // 如果 c 比目前的 max 還大，那 max 就換人做 (變成 c)
    if (c > max) {
        max = c;
    }
    
    // 輸出結果 
    printf("%d\n", max);

	return 0;
}