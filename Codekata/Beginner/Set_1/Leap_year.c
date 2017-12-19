#include<stdio.h>
int main(){
	int year;
	printf("Enter your birth year:");
	scanf("%d",&year);
	if(((year % 4 == 0) && (year % 100 !=0 )) || (year % 400 == 0))
		printf("Your birth year is a leap year");
	else
		printf("Your birth year is not a leap year");
	return 0;
}
