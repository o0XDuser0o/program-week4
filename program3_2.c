#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int ab = a+b,ac = a+c,bc = b+c;
    if(ab >= bc && ab >= ac){
        printf("%d + %d is the most valuable",a,b);
    }
    else if(ac >= ab && ac >= bc){
        printf("%d + %d is the most valuable",a,c);
    }
    else{
        printf("%d + %d is the most valuable",b,c);
    }
    return 0;
}