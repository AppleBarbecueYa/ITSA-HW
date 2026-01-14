#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // 上底(top)、下底(bottom)、高(height)
    int top, bottom, height;

    // 讀取輸入
    // 題目說明輸入三個整數，中間用空白隔開
    scanf("%d %d %d", &top, &bottom, &height);

    // 計算梯型面積
    // 公式：(上底 + 下底) * 高 / 2
    // 關鍵注意：
    // 這裡必須除以 "2.0"，強制讓電腦進行浮點數運算。
    // 如果只寫 / 2，像範例 (99+54)*47/2 = 3595.5 會被無條件捨去變成 3595 
    double area = (top + bottom) * height / 2.0;

    // 輸出結果
    // %.1f 代表保留一位小數
    printf("Trapezoid area:%.1f\n", area);

	return 0;
}