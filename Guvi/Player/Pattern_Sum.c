#include<stdio.h>
int main(){
	int sum =0, t,a,n,i;
    printf("Enter number of times:");
    scanf("%d",&n);
    printf("Enter the integer:");
    scanf("%d",&t);
    a = t;
    for(i=1;i<=n;i++){
        sum = sum + t;
        t = (t*10) + a;
     }
     printf("\n Sum = %d",sum);
}
