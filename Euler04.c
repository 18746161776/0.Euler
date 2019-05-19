/*************************************************************************
	> File Name: Euler04.c
	> Author: 
	> Mail: 
	> Created Time: 2019年05月19日 星期日 19时19分17秒
 ************************************************************************/

#include<stdio.h>
int is_valid(int x, int base) {
    int raw = x, temp = 0;
    while (x) {//推导这段代码正确性
        temp = temp * base + x % base;
        x /= base;  //等于a0
    }
    return temp == raw;
}

int main() {
    int ans = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            if (is_valid(i * j, 10) && i * j > ans) ans = i * j;
        }
    }
    printf("%d\n", ans);
    return 0;
}
