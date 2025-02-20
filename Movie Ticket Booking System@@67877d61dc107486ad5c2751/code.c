#include<stdio.h>
#include<string.h>
struct toll{
    char a[20];
    char vehicle[20];
    int d;
};

int main(){
    int n;
    scanf("%d", &n);
    struct toll b[n];
    float price,pr,pri;
    price=0;
    pr=0;
    pri=0;
    int i;
    for(i=0;i<n;i++){
        scanf("%s %s %d", b[i].a, b[i].vehicle, &b[i].d);
    }
    for(i=0;i<n;i++){
        if(strcmp(b[i].vehicle,"Standard")==0){
            pr=pr+b[i].d;
        }
        else if(strcmp(b[i].vehicle,"Premium")==0){
            pri=pri+b[i].d;
        }
        else{
            price=price+b[i].d;
        }
    }
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f", pr,pri,price);
}