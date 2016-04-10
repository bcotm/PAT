#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int b, s, g;
    b = n / 100;
    s = (n / 10) % 10;
    g = n % 10;
    int i = 0;
    for(; i < b; i++)
        putchar('B');
    for(i = 0; i < s; i++)
        putchar('S');
    for(i = 0; i < g; i++)
        printf("%d", i+1);
    return 0;
}
