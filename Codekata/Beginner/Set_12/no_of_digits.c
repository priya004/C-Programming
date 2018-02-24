#include<stdio.h>
int main(){
  int number,count=0;
  printf("Enter a number: ");
  scanf("%d",&number);
  while(number){
      number=number/10;
      count++;
  }
  printf("Total digits is:  %d",count);
  return 0;
}
