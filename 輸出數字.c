#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int num; 

    // 讀取輸入的 4 位數整數
    // 例如輸入：2341
    scanf("%d", &num);

    // 1. 千位數：直接除以 1000
    // 整數除法會無條件捨去小數。 2341 / 1000 = 2
    printf("%d\n", num / 1000);

    // 2. 百位數：先除以 100 變成 23，再對 10 取餘數 (%) 得到 3
    printf("%d\n", (num / 100) % 10);

    // 3. 十位數：先除以 10 變成 234，再對 10 取餘數 (%) 得到 4
    printf("%d\n", (num / 10) % 10);

    // 4. 個位數：直接對 10 取餘數
    printf("%d\n", num % 10);

	return 0;
}