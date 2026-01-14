#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int base, height; // 底 高

    // 題目說明輸入兩個整數，中間用空白隔開
    scanf("%d %d", &base, &height);

    // 計算三角形面積
    // 公式：(底 * 高) / 2
    // 關鍵注意：
    // 1. 題目要求輸出 "double" (浮點數)。
    // 2. 在 C 語言中，"整數 / 整數" 結果會是 "整數" (小數點會被切掉)。
    // 3. 解決方法：除以 "2.0" (而不是 2)，讓電腦知道我們要進行浮點數運算。
    double area = (base * height) / 2.0;

    // 輸出結果
    // %.1f 代表印出浮點數，並強制保留 1 位小數
    printf("Triangle area:%.1f\n", area);

	return 0;
}