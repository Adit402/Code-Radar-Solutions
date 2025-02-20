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
        if(b[i].vehicle== "Car"){
            pr+=b[i].d;
        }
        else if(b[i].vehicle=="Truck"){
            pri+= b[i].d;
        }
        else{
            price+=b[i].d;
        }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %2f", pr,pri,price);
}