#include <stdio.h>

int main(void){
    unsigned int N;
    scanf("%u", &N);
    int a, b, c, d;
    int al, bl;
    al = bl = 0;
    while(N--){
        scanf("%u %u %u %u", &a, &b, &c, &d);
        if(b != d){
            if(b == a+c)  bl++;
            if(d == a+c)  al++;
        }
    }
    printf("%u %u", al, bl);
    return 0;
}
