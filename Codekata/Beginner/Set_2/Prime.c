#include <stdio.h>
int main(){
	int num,m = 0,flag = 0,i;
	printf("Enter the integer:");
	scanf("%d",&num);
	m = num / 2;
	for(i = 2; i<=m;i++){
		if(num%i == 0){
			printf("Not a prime!");
			flag = 1;
			break;
		}
	}
	if(flag == 0){
			printf("Prime!");
		}
	return 0;
}
