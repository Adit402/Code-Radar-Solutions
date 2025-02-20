#include<stdio.h>

struct bonus{
    int a;
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
        scanf("%d %s %d",&a[i].a, a[i].name, &a[i].b);
    }
    for(i=0;i<n;i++){
        if(a[i].b>=50000){
            temp = a[i].b*0.05;
        }
        else{
            temp = a[i].b*0.10;
        }
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", a[i].a, a[i].name, temp);
    }

}