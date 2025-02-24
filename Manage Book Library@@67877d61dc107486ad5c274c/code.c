#include<stdio.h>

struct books{
    char name[20],str[20];
    float a;
};
int main(){
    int n,i;
    float num;
    scanf("%d", &n);
    struct books s[n];
    for(i=0;i<n;i++){
        scanf("%s %s %f", s[i].name, s[i].str, &s[i].a);
    }
    scanf("%f", &num);
    printf("Books above price %.2f:\n", num);
    for(i=0;i<n;i++){
        if(s[i].a>num){
            printf("Title: %s, Author: %s, Price: %.2f\n", s[i].name,s[i].str, s[i].a);
        }
    }
    return 0;
}