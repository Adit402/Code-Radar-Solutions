#include<stdio.h>

struct toll{
    int a;
    char vehicle[20];
    int d;
};

int main(){
    int n;
    scanf("%d", &n);
    struct toll b[n];
    float price=0,pr=0,pri=0;
    int i;
    for(i=0;i<n;i++){
        scanf("%d %s %d", &b[i].a, b[i].vehicle, &b[i].d);
    }
    for(i=0;i<n;i++){
        if(a[i].vehicle== 'Car'){
            pr+=a[i].d;
        }
        else if(a[i].vehicle=='Truck'){
            pri+= a[i].d;
        }
        else{
            price+=a[i].d;
        }
    }
    for(i=0;i<n;i++){
        printf("Cars: %.2f, Trucks: %.2f, Bikes: %2f\n", pr,pri,price);
    }
}