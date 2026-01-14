#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int x, y; // 宣告兩個整數變數
    
    // 讀取輸入的兩個整數
    // 題目保證 y 不會是 0，所以不用擔心除以零的問題
    scanf("%d %d", &x, &y);
    
    // 1. 加法 (Sum)
    printf("%d+%d=%d\n", x, y, x + y);
    
    // 2. 乘法 (Product)
    printf("%d*%d=%d\n", x, y, x * y);
    
    // 3. 減法 (Difference)
    printf("%d-%d=%d\n", x, y, x - y);
    
    // 4. 除法與餘數 (Quotient & Remainder)
    
    int q = x / y; // 先算 C 語言預設的商
    int r = x % y; // 先算 C 語言預設的餘數
    
    // 檢查：如果餘數是負的 (例如 -20 % 8 = -4)，不符合題目要求
    if (r < 0) {
        // 步驟 A: 將餘數修正為正數
        // 方法是：原本的負餘數 + 除數的絕對值
        // 例如：-4 + 8 = 4
        r = r + abs(y);
        
        // 步驟 B: 因為餘數變了，商也必須調整，才能符合驗算公式 (被除數 = 除數*商 + 餘數)
        // 最安全的做法是直接用新的餘數反推新的商
        // 公式：商 = (被除數 - 餘數) / 除數
        q = (x - r) / y;
    }
    
    // 輸出結果
    printf("%d/%d=%d...%d\n", x, y, q, r);

	return 0;
}