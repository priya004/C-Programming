#include <stdio.h>
int main(){
	char p;
	printf("Enter a character:");
	scanf("%c",&p);
	if(p == 'a' || p == 'e' || p == 'i' || p == 'o' || p == 'u' || p == 'A' || p == 'E' || p == 'I' || p == 'O' || p == 'U')
		printf("Vowel!");
	else
		printf("Consonent!");
	return 0;
}
