#include<stdio.h>
int main(){
	// odd even using bitwise AND
	int n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	if(n&1){
		printf("%d is odd",n);
	}
	else{
		printf("%d is even",n);
	}
	return 0;
}
