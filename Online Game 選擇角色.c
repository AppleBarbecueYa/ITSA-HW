#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int role; // 用來存放輸入的角色編號
    
    // 讀取輸入 (1 ~ 3)
    scanf("%d", &role);
    
    // 使用 switch 語法進行判斷
    switch (role) {
        case 1:
            // 如果 role 是 1
            printf("Person\n");
            break; // 記得要 break，否則會繼續執行下一個 case
            
        case 2:
            // 如果 role 是 2
            printf("Fairy\n");
            break;
            
        case 3:
            // 如果 role 是 3
            printf("Dwarf\n");
            break;
        
    }

	return 0;
}