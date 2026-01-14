#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n; // 用來存放輸入的整數
    
    scanf("%d", &n);
    
    // 判斷邏輯
    if (n > 0) {
        printf("正數\n");
    } else if (n == 0) {
        printf("0\n");
    } else {
        printf("負數\n");
    }

	return 0;
}