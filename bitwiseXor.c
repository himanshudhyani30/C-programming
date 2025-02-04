#include<stdio.h>
int main(){
	// odd even using bitwise X-OR
	int n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	if((n^1)==n+1){
		printf("%d is even",n);
	}
	else{
		printf("%d is odd",n);
	}
	return 0;
}
