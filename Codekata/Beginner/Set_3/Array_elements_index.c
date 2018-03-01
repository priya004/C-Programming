#include<stdio.h>
int main(){
  int i,n;
  printf("\nEnter the number of elements in the array");
  scanf("%d",&n);
  int A[n];
  printf("Enter the array elements");
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
  }
  for(i=0;i<n;i++){
    printf("Index Array_element");
    printf("%d %d",i,A[i]);
  }
  return 0;
}
