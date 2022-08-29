#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a >= b && a >= c){
        if(b > c){
            printf("%d + %d is the most valuable",a,b);
        }
        else if(b == c){
            printf("%d + %d is the most valuable",a,b);
        }
        else{
            printf("%d + %d is the most valuable",a,c);
        }
    }
    else if(b >= a && b >= c){
        if(a > c){
            printf("%d + %d is the most valuable",a,b);
        }
        else if(a == c){
            printf("%d + %d is the most valuable",a,b);
        }
        else{
            printf("%d + %d is the most valuable",b,c);
        }
    }
    else if(c >= a && c>= b){
        if(a > b){
            printf("%d + %d is the most valuable",a,c);
        }
        else if(a == c){
            printf("%d + %d is the most valuable",c,b);
        }
        else{
            printf("%d + %d is the most valuable",b,c);
        }
    }
}