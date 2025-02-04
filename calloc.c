#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p,size,i;
	printf("enter size: ");
	scanf("%d",&size);
	p=(int*)calloc(size,sizeof(int));
	printf("initialising elements:\n");
	for(i=0;i<size;i++){
		scanf("%d",p+i);
	}
	printf("printing elements:\n");
	for(i=0;i<size;i++){
		printf("%d ",*(p+i));
	}
	return 0;
}
