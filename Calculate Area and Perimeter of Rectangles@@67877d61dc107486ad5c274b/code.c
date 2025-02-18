#include<stdio.h>

struct rectangle{
    int l,b;
};


int main(){
    int i,n;
    float a,perimeter;
    scanf("%d", &n);
    struct rectangle area[n];
    for(i=0;i<n;i++){
        scanf("%d %d", &area[i].l, &area[i].b);
    }
    
    for(i=0;i<n;i++){
        a= (area[i].l) * (area[i].b);
        perimeter = 2*(area[i].l+area[i].b);
        printf("Rectange %d: Area = %.2f, Perimeter = %.2f\n", i+1, a, perimeter);
    }
}