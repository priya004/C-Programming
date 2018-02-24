#include<stdio.h>
int main(){
  int N,K,A[100],i;
  printf("\n Enter then number of elements in the array:");
  scanf("%d",&N);
  printf("\n Enter the value of K:");
  scanf("%d",&K);
  for(i = 0;i<N;i++){
    scanf("%d",&A[i]);
   }
    for(i = 0;i<N;i++){
      if(A[i] == K)
        printf("\nyes");
      else
        printf("\nyes");
     }
     return 0;
}
