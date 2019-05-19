/*************************************************************************
	> File Name: Euler03.c
	> Author: 
	> Mail: 
	> Created Time: 2019年05月19日 星期日 19时01分06秒
 ************************************************************************/
#define N 600851475143LL

#include<stdio.h>
int main() {
    long long num = N, ans, i = 2;
    while (i * i <= num) {
        if (num % i == 0) ans = i; //ans记录最大的素因子
        while (num % i == 0) num /= i;
        i++;
    }
    if (num != 1) ans = num;  //num为什么一定是素数
    printf ("%lld\n",ans);
    return 0;
}
