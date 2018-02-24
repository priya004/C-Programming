#include<stdio.h>
int main(){
  int n,i,k,a,j;
  printf("\nEnter the k value:");
  scanf("%d",&k);
  printf("\nEnter number of elements in the array:");
  scanf("%d",&n);
  int A[n];
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
   }
    for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j)
            {
                if (A[i] > A[j]) 
                {
                    a =  A[i];
                    A[i] = A[j];
                    A[j] = a;
                }
            }
        }
   printf("%d",A[k]);
   return 0;
  }
