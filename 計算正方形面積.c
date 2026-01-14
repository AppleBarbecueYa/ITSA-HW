#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n; // 幾筆測資
    
    // 有 n 個正方形要計算
    scanf("%d", &n);
    
    // 使用迴圈執行 n 次
    for (int i = 0; i < n; i++) {
        double w; // 宣告邊長變數 (題目說是浮點數 double)
        
        // 讀取邊長
        scanf("%lf", &w);
        
        // 計算面積：邊長 * 邊長
        double area = w * w;

        // --- 修正重點：手動四捨五入 ---
        // 1. area * 10   : 把小數點第一位移到個位數 (72.25 -> 722.5)
        // 2. + 0.5       : 加上 0.5 讓 .5 以上的數字自動進位 (722.5 + 0.5 = 723.0)
        // 3. (int)       : 強制轉成整數，切掉小數點 (723)
        // 4. / 10.0      : 轉回浮點數並移回小數點 (72.3)
        area = (int)(area * 10 + 0.5) / 10.0;
        
        // 輸出結果
        // %.1f 會自動將小數點後第二位進行四捨五入(或近似處理)並保留一位
        printf("%.1f\n", area);
    }

	return 0;
}