/*************************************************************************
	> File Name: Euler02-2.c
	> Author: 
	> Mail: 
	> Created Time: 2019年05月19日 星期日 18时35分14秒
 ************************************************************************/

#include<stdio.h>

#define MAX_M 4000000
int main() {
   long long sum = 0;
    int a = 0, b = 1;
    while (a + b < MAX_M) {
        b = a + b;
        a = b - a;
        if (!(b & 1)) sum += b;
    }
    printf("%lld\n", sum);
    return 0;
}
