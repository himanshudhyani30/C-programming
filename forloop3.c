#include<stdio.h>
int main(){
	int i,n,avg,sum=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+i;
		avg=(sum/n);
	}
	printf("the avg is: %d",avg);
	return 0;
}
