#include <stdio.h>
int main(){
	int arr[10],n,temp,i;
	printf("Enter the number of array elements:");
	scanf("%d",&n);
	printf("\nEnter the elements of the array:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
//	while(n!=0){
	if(n%2 == 0){
		for(i=0;i<n;i+= 2){
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
			
		}
		//	continue;
	}
	else{
		for(i=0;i<2;i++){
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
			if(arr[n - 1])
				break;
		}	
	}
	printf("\nThe modified array:");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
//	}
}
