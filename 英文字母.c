#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    char c; // 宣告字元變數
    
    // 讀取一個字元
    scanf("%c", &c);
    
    // 判斷是否為母音
    // 題目說不分大小寫，所以大寫的 A, E, I, O, U 也要算進去
    if (c == 'a' || c == 'A' || 
        c == 'e' || c == 'E' || 
        c == 'i' || c == 'I' || 
        c == 'o' || c == 'O' || 
        c == 'u' || c == 'U') {
        
        // 如果符合上述任何一個條件，就是母音
        printf("母音\n");
    } else {
        // 如果都不符合，那就是子音
        printf("子音\n");
    }

	return 0;
}