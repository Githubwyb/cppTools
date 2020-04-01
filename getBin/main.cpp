/*
 * @Author WangYubo
 * @Date 09/17/2018
 * @Description
 */

#include <stdio.h>

int main(int argC, char* arg[]) {
    // 传入一个参数
    if (argC == 1) {
        printf("No param input\r\n");
        return -1;
    }

    for (int i = 0; i < 32; i++) {
        printf("%3d ", 31 - i);
    }
    printf("\r\n");
    for (int j = 1; j < argC; j++) {
        int num = 0;
        if (sscanf(arg[j], "%d", &num) != 1) {
            continue;
        }
        int tmp = num;
        for (int i = 0; i < 32; i++) {
            printf("%3d ", (num & 0x80000000) > 0);
            num <<= 1;
        }
        printf("%11d", tmp);
        printf("\r\n");
    }
    return 0;
}
