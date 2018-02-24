#include<stdio.h>
int main(){
  int N,K,A[100],i,count;
  printf("\n Enter then number of elements in the array:");
  scanf("%d",&N);
  printf("\n Enter the value of K:");
  scanf("%d",&K);
  for(i = 0;i<N;i++){
    scanf("%d",&A[i]);
   }
    for(i = 0;i<N;i++){
      if(A[i] == K)
        count++;
      else
        continue;
     }
    printf("%d",count);
     return 0;
}
