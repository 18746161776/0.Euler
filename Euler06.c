/*************************************************************************
	> File Name: Euler06.c
	> Author: 
	> Mail: 
	> Created Time: 2019年05月19日 星期日 19时34分37秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int sum1 = 0, sum2 = 0;
    sum1 = 5050;

    for (int i = 1; i <= 100; i++) {
        sum2 += i * i;
    }
    printf("%d\n", sum1 * sum1 - sum2);
    return 0;
}
