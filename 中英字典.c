#include <stdio.h>
#include <stdlib.h>
#include <string.h> //為了使用 strcmp

int main(int argc, char *argv[]) {
    // 宣告一個字元陣列來存放使用者輸入的查詢單字
    char query[100];
    
    // 準備字典資料
    // 我們可以用兩個陣列來分別存放英文和對應的中文
    // 這裡使用指標陣列 (char*) 來儲存字串常數
    const char *english[] = {"dog", "cat", "duck", "cow", "fox"};
    const char *chinese[] = {"狗", "貓", "鴨", "牛", "狐"};
    
    // 字典的大小 (總共有 5 組單字)
    int dict_size = 5;
    
    // 讀取輸入
    scanf("%s", query);
    
    // 使用迴圈來搜尋字典
    for (int i = 0; i < dict_size; i++) {
        
        // 情況 1: 使用者輸入的是英文
        // strcmp(a, b) == 0 表示兩個字串完全相同
        if (strcmp(query, english[i]) == 0) {
            // 如果輸入的字跟 english[i] 一樣，就印出對應的 chinese[i]
            printf("%s\n", chinese[i]);
            return 0; // 找到後就可以結束程式
        }
        
        // 情況 2: 使用者輸入的是中文
        if (strcmp(query, chinese[i]) == 0) {
            // 如果輸入的字跟 chinese[i] 一樣，就印出對應的 english[i]
            printf("%s\n", english[i]);
            return 0; // 找到後就可以結束程式
        }
    }

	return 0;
}