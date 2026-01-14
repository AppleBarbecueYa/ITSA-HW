#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int w, h; // w (體重 kg), h (身高 cm)
    
    // 讀取輸入
    scanf("%d %d", &w, &h);
    
    // 1. 單位轉換：將身高從公分 (cm) 轉為公尺 (m)
    // 必須除以 100.0 (浮點數)，否則會變成整數除法
    double h_meter = h / 100.0;
    
    // 2. 計算 BMI
    // 公式：體重 / 身高的平方
    double bmi = w / (h_meter * h_meter);
    
    // 3. 手動四捨五入到小數點第二位
    // 邏輯：先乘 100 -> 加 0.5 (四捨五入) -> 取整數 -> 再除以 100.0
    // 例如 15.2038 -> 1520.38 -> 1520.88 -> 1520 -> 15.20
    bmi = (int)(bmi * 100 + 0.5) / 100.0;
    
    // 4. 輸出結果
    // %.2f 代表強制印出兩位小數
    printf("%.2f\n", bmi);

	return 0;
}