#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int m, n; // 宣告兩個變數來存放輸入的整數
    
    // 讀取輸入
    scanf("%d %d", &m, &n);
    
    // 開始執行輾轉相除法
    // 迴圈條件：只要 n (當作除數) 還不為 0，就繼續做
    while (n != 0) {
        int r = m % n; // 1. 算出餘數
        m = n;         // 2. 把原本的除數 (n) 移給被除數 (m)
        n = r;         // 3. 把算出來的餘數 (r) 變成新的除數 (n)
    }
    
    // 當迴圈結束時，n 會是 0，而 m 就是我們要的最大公因數
    printf("%d\n", m);

	return 0;
}