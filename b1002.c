#include <stdio.h>

char pinyin[10][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
char *ans[5] = {0};

int main(void){
    int c, sum;
    sum = 0;

    while((c = getchar())!='\n'){
        sum += c - '0';
    }

    if(sum == 0){
        printf("ling");
        return 0;
    }
    int i = 0;
    while(sum){
        ans[i++] = pinyin[sum%10];
        sum /= 10;
    }

    while(--i){
        printf("%s ", ans[i]);
    }
    printf("%s", ans[0]);
    return 0;
}
