#include <stdio.h>

int main(void){
    unsigned int N, num;
    scanf("%u", &N);
    int a, b, c, d, e;
    a = b = c = d = e = 0;
    int sign = 1;
    int bc = 0;
    int dnum = 0;
    while(N--){
        scanf("%u", &num);
        switch(num%5){
            case 0:
                if(num%2 == 0)
                    a+=num;
                break;
            case 1:
                b+=sign*num;
                sign=-sign;
                bc = 1;
                break;
            case 2:
                c++;
                break;
            case 3:
                d+=num;
                dnum++;
                break;
            case 4:
                if(num>e)
                    e = num;
                break;
        }
    }

    if(a) printf("%u ", a);
    else printf("N ");

    if(bc) printf("%d ", b);
    else printf("N ");

    if(c) printf("%d ", c);
    else printf("N ");

    if(d) printf("%.1f ", (double)d/dnum);
    else printf("N ");

    if(e) printf("%u", e);
    else printf("N");

    return 0;
}
