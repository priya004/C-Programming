#include <stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter three numbers:");
	scanf("%d,%d,%d",&num1,&num2,&num3);
	if(num1 > num2 && num1 > num3)
		printf("\nNum1 is largest");
	else if(num2 > num1 && num2 > num3)
		printf("\nNum2 is the largest");
	else if(num3 > num1 && num3 > num2)
		printf("\nNum3 is the largest");
	return 0;
}
