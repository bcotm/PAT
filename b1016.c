#include <stdio.h>
#include <string.h>

int main(void){
    unsigned long long int pa[10], pb[10], a, b;
    unsigned int  da, db;
    memset(pa, 0, sizeof(pa));
    memset(pb, 0, sizeof(pb));
    scanf("%lld %d %lld %d", &a, &da, &b, &db);
    int m, i;

    do{
        m = a%10;
        pa[m] = pa[m]*10 + m;
        a /= 10;
    }while(a);

    do{
        m = b%10;
        pb[m] = pb[m]*10 + m;
        b /= 10;
    }while(b);

    printf("%lld", pa[da]+pb[db]);
    return 0;
}
