#include <stdio.h>

char ans[90][90] = {0};

int main(void){
    char str[90];
    gets(str);
    int len = strlen(str);
    int r = 0, h = 0;
    int i = 0;
    for(;i < len; i++){
        if(str[i] != ' '){
            ans[r][h++] = str[i];
        }else{
            r++;
            h = 0;
        }
    }
    for(i = r; i >= 0; i--){
        printf("%s", ans[i]);
        if(i > 0) putchar(' ');
    }
    return 0;
}
