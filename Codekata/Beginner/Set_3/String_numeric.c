#include<stdio.h>
int main(){
  float a;
  scanf("%f",&a);
  int c=(int)a;
  float d=c;
  if(d==a){
    printf("the no. is an integer");
  }
  else{
    printf("the no is not an integer");
  }
return 0;
}
