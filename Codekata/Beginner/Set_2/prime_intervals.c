#include <stdio.h>
int main(){
	int n,a = 0,temp = 0,i;
	printf("Enter the integer:");
	scanf("%d",&n);
	a = n / 2;
	for(i = 2; i<=a;i++){
		if(n%i == 0){
			printf("Not a prime!");
			temp = 1;
			break;
		}
	}
	if(temp == 0){
			printf("Prime!");
		}
	return 0;
}
