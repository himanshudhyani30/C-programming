#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the value of a and b\n");
	scanf("%d %d",&a,&b);
	printf("Addition of a and b is: %d\n",a+b);
	printf("Subtraction of a and b is: %d\n",a-b);
	printf("Multipication of a and b is: %d\n",a*b);
	if(b==0){
		printf("b should not be 0\n");
	}
	if(b!=0){
		printf("Division of a and b is: %0.2f\n",(float)a/b);	
	}
	printf("Modulus of a and b is: %d\n",a%b);
	return 0;
}
