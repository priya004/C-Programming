#include<stdio.h>
int main(){
  int N,K,i;
  printf("/nEnter the number of elements in the array:");
  scanf("%d",&N);
  int A[N],B[N];
  for(i = 0;i<N;i++){
    scanf("%d",&A[i]);
  }
  printf("\nEnter the K value:");
  scanf("%d",&K);
   for(i = 0;i<N;i++){
      if(A[i]%2 != 0)
        B[i] = A[i];
       else
        continue;
    }
    printf("%d",B[K]);
    return 0;
   }
