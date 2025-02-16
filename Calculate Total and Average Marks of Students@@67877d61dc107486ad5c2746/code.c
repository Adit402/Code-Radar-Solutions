#include<stdio.h>

struct students{
    int roll_number;
    char name[20];
    float marks;
};

int main(){
    int n,i;
    float sum=0;
    scanf("%d", &n);
    struct students s[n];
    for(i=0;i<n;i++){
        scanf("%d %s %f", &s[i].roll_number, s[i].name, &s[i].marks);
    }
    for(i=0;i<n;i++){
        sum= sum+s[i].marks;
    }
    float avg= sum/n;
    printf("Total Marks: %.2f", sum);
    printf("Average Marks: %.2f", avg);
    return 0;    
}