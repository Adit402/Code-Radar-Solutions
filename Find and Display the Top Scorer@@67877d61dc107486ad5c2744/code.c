#include<stdio.h>

struct students{
    int roll_number;
    char name[20];
    float marks;
};

int main(){
    int n,i;
    float sum;
    scanf("%d", &n);
    struct students s[n];
    for(i=0;i<n;i++){
        scanf("%d %s %f", &s[i].roll_number, s[i].name, &s[i].marks);
    }
    
    for(i=0;i<n-1;i++){
        if(s[i].marks>s[i+1].marks){
            sum=s[i].marks;
        }
        else{
            sum=s[i+1].marks;
        }
    }
    for(i=0;i<n;i++){
        if(n==1){
        printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f", s[0].roll_number, s[0].name,s[0].marks);
        return 0;
    }
        if(s[i].marks==sum){
            printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f", s[i].roll_number, s[i].name,s[i].marks);
        }
    }
    return 0;    
}