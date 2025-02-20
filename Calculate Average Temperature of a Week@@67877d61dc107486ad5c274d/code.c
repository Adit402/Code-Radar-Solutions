#include<stdio.h>

struct temp{
    char day[20];
    int t;
};

int main(){
    int i;
    scanf("%d",&n);
    struct temp a[7];
    for(i=0;i<7;i++){
        scanf("%s %d", a[i].day, &a[i].t);
    }
    float sum=0;
    for(i=0;i<7;i++){
        sum+=a[i].t;
    }
    printf("Average Temperature: %.2f", sum/7.00);
    return 0;
}