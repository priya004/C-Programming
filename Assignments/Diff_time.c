#include<stdio.h>
int main(){
	float t1,t2,diff;
	printf("Enter the first time : ");
	scanf("%f",&t1);
	printf("\nEnter the second time : ");
	scanf("%f",&t2);
	if(t1 < t2)
	diff = t2 - t1;
	else
	diff = t1 - t2;
	printf("\n%.2f hours",diff);
	return 0;
}
