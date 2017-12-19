#include <stdio.h>
int main(){
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a > 0)
		printf("The number is Positive!");
	else if(a < 0)
		printf("The number is Negative!");
	else
		printf("It is zero");
	return 0;
}
