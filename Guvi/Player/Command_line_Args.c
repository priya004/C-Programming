#include<stdio.h>
int main(int argc , char *argv[]){
	if(argc == 2)
    	printf("Yes!!");
    else if(argc > 2)
    	printf("Too many!");
    else
    	printf("Need atleast one argument");
    return 0;
}
