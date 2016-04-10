#include <stdio.h>
#include <string.h>

typedef struct student{
    char name[20];
    char id[20];
    int score;
}student;

int main(void){
    int n;
    scanf("%d", &n);
    student stus[n];
    int i, max, min, max_score, min_score;
    i = max = min = max_score = min_score = 0;
    for(; i < n; i++){
        scanf("%s %s %d", stus[i].name, stus[i].id, &stus[i].score);
        if(stus[i].score >= max_score){
            max = i;
            max_score = stus[i].score;
        }
        if(stus[i].score <= min_score){
            min = i;
            min_score = stus[i].score;
        }
    }
    printf("%s %s\n", stus[max].name, stus[max].id);
    printf("%s %s", stus[min].name, stus[min].id);
    return 0;
}
