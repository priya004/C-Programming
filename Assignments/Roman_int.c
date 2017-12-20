#include<stdio.h>
#include<string.h>
int digi(char c){
	int value = 0;
	switch(c){
	         case 'I': value = 1; break;
	         case 'V': value = 5; break;
	         case 'X': value = 10; break;
	         case 'L': value = 50; break;
	         case 'C': value = 100; break;
	         case 'D': value = 500; break;
	         case 'M': value = 1000; break;
	         case '\0': value = 0; break;
	         default: value = -1; 
	}
	return value;
}
int main(){
	char r[10];
	long int num = 0;
	int i=0;
	printf("Enter your number in roman number:");
	scanf("%s",r);
	while(r[i]){
		if(digi(r[i]) >= digi(r[i+1]))
			num = num + digi(r[i]);
		else{
            		num = num + (digi(r[i+1]) - digi(r[i]));
            		i++;
            	}
            i++;
	}
	printf("\nIts decimal value is : %ld",num);
	return 0;
}
