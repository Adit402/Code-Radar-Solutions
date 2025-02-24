#include<stdio.h>

struct student{
    int roll_number;
    char name[20];
    float marks;
};

int main(){
    int n,i;
    scanf("%d", &n);
    struct student s[n];
    for(i=0;i<n;i++){
        scanf("%d %s %f", &s[i].roll_number, s[i].name, &s[i].marks);
    }
    for(i=0;i<n;i++){
        if(s[i].marks>=85){
            printf("Roll Number: %d, Name: %s, Grade: A\n",s[i].roll_number,s[i].name);
        }
        else if(s[i].marks<84 && s[i].marks>=70){
            printf("Roll Number: %d, Name: %s, Grade: B\n",s[i].roll_number,s[i].name);
        }
        else{
            printf("Roll Number: %d, Name: %s, Grade: C\n",s[i].roll_number,s[i].name);
        }
    }
}