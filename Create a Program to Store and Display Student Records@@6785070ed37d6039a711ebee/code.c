#include<stdio.h>

struct students{
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
        printf("Roll Number: %d, ", s[i].roll_number);
        printf("Name: %s, ", s[i].name);
        printf("Marks: %.2f", s[i].marks);
    }
    return 0;    
}