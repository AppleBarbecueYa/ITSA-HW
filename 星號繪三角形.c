#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int type; // 用來存放使用者輸入的選擇 (1, 2, 或 3)
    int n = 5; // 題目指定：五層的三角形
    
    // 讀取輸入
    scanf("%d", &type);
    
    // 根據輸入的數字決定畫哪一種圖形
    if (type == 1) {
        // --- 情況 1: 空心三角形 ---
        for (int i = 1; i <= n; i++) {
            // 步驟 A: 印出前方的空白 (隨著層數增加，空白變少)
            // 第1層4空, 第2層3空... -> 公式: n - i
            for (int j = 0; j < n - i; j++) {
                printf(" ");
            }
            
            // 步驟 B: 印出星星和中間的空白
            // 如果是第一層 (頂點)，只印一顆星
            if (i == 1) {
                printf("*");
            }
            // 如果是最後一層 (底座)，印滿星星 (2*n - 1 顆)
            else if (i == n) {
                for (int j = 0; j < (2 * n - 1); j++) {
                    printf("*");
                }
            }
            // 如果是中間層 (空心部分)
            else {
                printf("*"); // 左邊的牆壁
                
                // 中間的空白數公式：2*(i-1) - 1
                // 例如第2層中間1空, 第3層中間3空
                for (int j = 0; j < 2 * (i - 1) - 1; j++) {
                    printf(" ");
                }
                
                printf("*"); // 右邊的牆壁
            }
            
            // 該層結束，換行
            printf("\n");
        }
    }
    else if (type == 2) {
        // --- 情況 2: 實心三角形 ---
        for (int i = 1; i <= n; i++) {
            // 步驟 A: 印出前方空白 (4, 3, 2, 1, 0)
            for (int j = 0; j < n - i; j++) {
                printf(" ");
            }
            
            // 步驟 B: 印出實心星星 (1, 3, 5, 7, 9)
            // 公式: 2 * i - 1
            for (int j = 0; j < (2 * i - 1); j++) {
                printf("*");
            }
            
            // 換行
            printf("\n");
        }
    }
    else if (type == 3) {
        // --- 情況 3: 實心倒三角形 ---
        // 邏輯跟實心三角形一樣，只是迴圈從 5 倒數回 1
        for (int i = n; i >= 1; i--) {
            // 步驟 A: 印出前方空白 (因為 i 變小，n-i 變大 -> 0, 1, 2, 3, 4)
            for (int j = 0; j < n - i; j++) {
                printf(" ");
            }
            
            // 步驟 B: 印出星星 (9, 7, 5, 3, 1)
            for (int j = 0; j < (2 * i - 1); j++) {
                printf("*");
            }
            
            // 換行
            printf("\n");
        }
    }


	return 0;
}