#include<stdio.h>
#include<math.h>
int main(){
	int a,pro,b;
	printf("Enter the number and its power that is to be raised: ");
	scanf("%d%d",&a,&b);
	pro = pow(a,b);
	printf("%d",pro);
	return 0;
}
