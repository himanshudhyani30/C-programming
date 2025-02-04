#include<stdio.h>
int main(){
	int a[]={1,2,8,4,5};
	int n= sizeof(a[0]);
	int sum=0;
	int *ptr= a;
	int i;
	for (i=0;i<=n;i++){
		sum= sum+ *ptr;
		ptr++;
	}
	printf("sum of array = %d",sum);
	return 0;
}
