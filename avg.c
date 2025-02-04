#include<stdio.h>
int main(){
	int a,b,c,d,e;
	printf("Enter the value of a\n");
	printf("Enter the value of b\n");
	printf("Enter the value of c\n");
	printf("Enter the value of d\n");
	printf("Enter the value of e\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	printf("The average is: %d",(a+b+c+d+e)/5);
	return 0;
}
