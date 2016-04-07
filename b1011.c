#include <stdio.h>

int main(void){
    unsigned int t;
    scanf("%d", &t);
    long long int a ,b, c;
    unsigned int i = 1;
    while(t--){
        scanf("%lld %lld %lld", &a, &b, &c);
        if(a + b > c)
            printf("Case #%d: true\n",i++);
        else
            printf("Case #%d: false\n", i++);
    }
    return 0;
}
