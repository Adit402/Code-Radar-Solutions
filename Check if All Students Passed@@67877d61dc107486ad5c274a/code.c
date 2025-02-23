#include<stdio.h>

struct students{
    int a;
    char name[20];
    float marks;
};

int main(){
    int n;
    scanf("%d", &n);
    struct students s[n];
    int i,ctr=0;
    for(i=0;i<n;i++){
        scanf("%d %s %f", &s[i].a, s[i].name, &s[i].marks);
    }
    for(i=0;i<n;i++){
        if(s[i].marks>50.0){
            ctr++;
        }
        else{
            printf("Not All Passed");
            return 0;
        }
    }
    printf("All PAssed");
}