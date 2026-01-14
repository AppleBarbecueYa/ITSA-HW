#include <stdio.h>
#include <stdlib.h>
#include <math.h> // 使用 ceil() 進位函式

int main(int argc, char *argv[]) {
    int distance; // 輸入的距離 (公尺)
    
    // 讀取輸入
    scanf("%d", &distance);
    
    // 1. 計算朋友的速度 (換算成 公尺/秒)
    // 題目給：30 英吋/秒，1 英吋 = 2.54 公分
    // 算式：30 * 2.54 = 76.2 公分/秒
    // 再除以 100 換成公尺： 76.2 / 100 = 0.762 公尺/秒
    double friend_speed = 30 * 2.54 / 100.0;
    
    // 2. 設定你的速度
    double my_speed = 1.0; // 1 公尺/秒
    
    // 3. 計算相對速度 (追趕速度)
    double diff_speed = my_speed - friend_speed; // 1.0 - 0.762 = 0.238
    
    // 4. 計算所需時間
    // 時間 = 距離 / 速度差
    double time_val = distance / diff_speed;
    
    // 5. 處理無條件進入 (Ceiling)
    // ceil() 會回傳大於等於該數的最小整數 (例如 ceil(840.3) = 841.0)
    // 最後強制轉型成 int 輸出
    int result = (int)ceil(time_val);
    
    printf("%d\n", result);

	return 0;
}