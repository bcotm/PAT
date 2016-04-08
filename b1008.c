#include <stdio.h>

int main(void){
    unsigned int n, m;
    scanf("%u%u", &n, &m);
    int nums[n], num;
    int i = 0;
    for(;i < n; i++){
        scanf("%d", &num);
        nums[(i+m)%n] = num;
    }
    for(i = 0; i < n; i++){
        printf("%d", nums[i]);
        if(i != n-1) putchar(' ');
    }
    return 0;
}
