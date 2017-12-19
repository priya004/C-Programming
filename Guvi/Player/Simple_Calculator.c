#include<stdio.h>
int main(){
	int a,b,add,sub,mul,div,mod;
    printf("Enter two integers:");
    scanf("%d%d",&a,&b);
    add = a +b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;
    printf("%d,%d,%d,%d,%d",add,sub,mul,div,mod);
    return 0;
}
