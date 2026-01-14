#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // 宣告一個字元陣列 (字串) 來存放輸入的名字
    char name[100];
    
    // 讀取使用者輸入的名字
    // 注意：陣列名稱本身就是位址，所以不需要加 &
    scanf("%s", name);
    
    // 輸出結果
    // 根據範例 Output，格式必須是 "Hello " 接上名字
    printf("Hello %s\n", name);

	return 0;
}