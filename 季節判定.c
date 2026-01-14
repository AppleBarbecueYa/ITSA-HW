#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int m; // 用來存放月份
    
    // 讀取輸入 (1 ~ 12)
    scanf("%d", &m);
    
    // 依照月份判斷季節
    if (m >= 3 && m <= 5) {
        // 3 ~ 5 月 -> 春天
        printf("Spring\n");
    } else if (m >= 6 && m <= 8) {
        // 6 ~ 8 月 -> 夏天
        printf("Summer\n");
    } else if (m >= 9 && m <= 11) {
        // 9 ~ 11 月 -> 秋天
        printf("Autumn\n");
    } else {
        // 剩下的月份是 12, 1, 2 -> 冬天
        printf("Winter\n");
    }

	return 0;
}