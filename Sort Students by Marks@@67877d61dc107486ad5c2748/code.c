#include<stdio.h>
#include<string.h>
struct students{
    int roll_number;
    char name[20];
    float marks;
};

int main(){
    int n,i,j;
    float sum;
    char str[20];
    scanf("%d", &n);
    struct students s[n];
    for(i=0;i<n;i++){
        scanf("%d %s %f", &s[i].roll_number, s[i].name, &s[i].marks);
    }
    for(i=0;i<=n-1;i++){
        if(s[i].marks<s[i+1].marks){
            sum=s[i].marks;
            j=s[i].roll_number;
            strcpy(s[i].name,str);
            strcpy(s[i+1].name,s[i].name);
            strcpy(str,s[i+1].name);
            s[i].marks=s[i+1].marks;
            s[i+1].marks=s[i].marks;
            s[i].roll_number=s[i+1].roll_number;
            s[i+1].roll_number=j;
        }
    }
    for(i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", s[i].roll_number,s[i].name,s[i].marks);
    }
    return 0;    
}