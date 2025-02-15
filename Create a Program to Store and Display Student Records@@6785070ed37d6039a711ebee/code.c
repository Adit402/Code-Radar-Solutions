#include<stdio.h>

struct students{
    int roll_number;
    char name[20];
    float marks;
}s;

int main(){
    int n;
    scanf("%d", &n);
    struct student s[n];
    for(i=0;i<n;i++){
        scanf("%d %s %f", &s.roll_number, s.name, &s.marks);
    }
    printf("Roll Number: %d, ", s.roll_number);
    printf("Name: %s, ", s.name);
    printf("Marks: %f", s.marks);
}