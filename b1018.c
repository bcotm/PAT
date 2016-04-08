#include <stdio.h>

int change(char c){
    if(c == 'B') return 0;
    if(c == 'C') return 1;
    if(c == 'J') return 2;
}

int main(void){
    char mp[3] = {'B', 'C', 'J'};
    int n;
    scanf("%d", &n);
    int at, bt, ev;
    at = bt = ev = 0;
    int ah[3] = {0}, bh[3] = {0};
    char a, b;
    int k1, k2, i;
    for(i = 0;i < n; i++){
        getchar();
        scanf("%c %c", &a, &b);
        k1 = change(a);
        k2 = change(b);
        if((k1+1)%3 == k2){
            at++;
            ah[k1]++;
        }else if(k1 == k2){
            ev++;
        }else{
            bt++;
            bh[k2]++;
        }
    }
    printf("%d %d %d\n", at, ev, bt);
    printf("%d %d %d\n", bt, ev, at);
    int ap, bp;
    ap = bp = 0;
    for(i = 0; i < 3; i++){
        if(ah[i]>ah[ap]) ap = i;
        if(bh[i]>bh[bp]) bp = i;
    }
    printf("%c %c\n", mp[ap], mp[bp]);
    return 0;
}
