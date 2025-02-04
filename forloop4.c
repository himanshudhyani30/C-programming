#include<stdio.h>
int main(){
	int i,n;
	printf("enter limit\n");
	scanf("%d",&n);
	printf("natural no.s in reverse order:\n");
	for(i=n;i>=1;i--){
		printf("%d\n",i);
	}
	return 0;
}
