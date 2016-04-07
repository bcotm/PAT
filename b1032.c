#include <stdio.h>
int school[100010]={0};

int main(void){
    int n, s, g;
    scanf("%d", &n);
    int maxg, maxs;
    maxg = -1;maxs = 0;
    while(n--){
        scanf("%d %d", &s, &g);
        school[s] += g;
        if(school[s] > maxg){
            maxg = school[s];
            maxs = s;
        }
    }

    printf("%d %d", maxs, maxg);
    return 0;
}
