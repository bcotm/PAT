#include <stdio.h>

int main(void){
    unsigned int a,n;
    n = 0;
    scanf("%u",&a);
    while(a!=1){
        if(a%2==0) a = a/2;
        else a = (3*a + 1) / 2;
        n++;
    }
    printf("%d",n);
    return 0;
}
