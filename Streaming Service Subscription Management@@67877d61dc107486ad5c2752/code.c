#include<stdio.h>
#include<string.h>
struct toll{
    char a[20];
    char vehicle[20];
    float d;
};

int main(){
    int n,e=0,f=0,c=0;
    scanf("%d", &n);
    struct toll b[n];
    float price,pr,pri;
    price=0;
    pr=0;
    pri=0;
    int i;
    for(i=0;i<n;i++){
        scanf("%s %s %f", b[i].a, b[i].vehicle, &b[i].d);
    }
    for(i=0;i<n;i++){
        if(strcmp(b[i].vehicle,"Basic")==0){
            pr=pr+b[i].d;
            e++;
        }
        else if(strcmp(b[i].vehicle,"Standard")==0){
            pri=pri+b[i].d;
            f++;
        }
        else{
            price=price+b[i].d;
            c++;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f",e, pr,f,pri,c,price);
}