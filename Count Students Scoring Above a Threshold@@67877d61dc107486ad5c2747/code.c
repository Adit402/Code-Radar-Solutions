#include<stdio.h>

struct students{
    int roll_number;
    char name[20];
    float marks;
};

int main(){
    int n,i,ctr=0;
    float sum=0,x;
    scanf("%d", &n);
    struct students s[n];
    for(i=0;i<n;i++){
        scanf("%d %s %f", &s[i].roll_number, s[i].name, &s[i].marks);
    }
    scanf("%f", &x);
    for(i=0;i<n;i++){
        if(s[i].marks>x){
            ctr++;
        }
    }
    printf("Count of students scoring above %.2f: %d", x,ctr);
    return 0;    
}