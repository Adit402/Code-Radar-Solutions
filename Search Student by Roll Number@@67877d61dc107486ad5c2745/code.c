#include<stdio.h>

struct student{
    int rollno;
    char name[20];
    float marks;
};
typedef struct student tem;

int main(){
    int x,n,i;
    scanf("%d", &n);
    tem temp[n];
    for(i=0;i<n;i++){
        scanf("%d %s %f", &temp[i].rollno, temp[i].name, &temp[i].marks);
    }
    scanf("%d", &x);
    for(i=0;i<n;i++){
        if(temp[i].rollno==x){
            printf("Roll Number: %d, Name: %s, Marks: %.2f", temp[i].rollno, temp[i].name, temp[i].marks);
        }
    }
}