#include<stdio.h>
#include<string.h>
struct students{
    int roll_number;
    char name[20];
    float marks;
};

int main(){
    struct students temp;
    int n,i,j;
    float sum;
    char str[20];
    scanf("%d", &n);
    struct students s[n];
    for(i=0;i<n;i++){
        scanf("%d %s %f", &s[i].roll_number, s[i].name, &s[i].marks);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
    {
        if(s[j].marks<s[j+1].marks){
            temp=s[j];
            s[j]=s[j+1];
            s[j+1]=temp;           
            
        }
    }
    }
    
    for(i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", s[i].roll_number,s[i].name,s[i].marks);
    }
    return 0;    
}