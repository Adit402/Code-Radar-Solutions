#include<stdio.h>

struct bonus{
    char name[20];
    int b;
};

int main(){
    int n;
    scanf("%d", &n);
    int i;
    float temp;
    struct bonus a[n];
    for(i=0;i<n;i++){
        scanf("%s %d",a[i].name, &a[i].b);
        if(a[i].b > 50000){
            temp=a[i].b*0.05;
        }
        else{
            temp= a[i].b*0.10;
        }
        printf("Employee ID: %d, Name: %s, Bonus: %.2f",i+1,a[i].name, temp);
    }

}