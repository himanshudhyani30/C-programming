#include<stdio.h>
int main(){
	int a,b;
	printf("enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	printf("multiply: %d\n",a*=b);
	printf("division: %d\n",a/=b);
	printf("modulus: %d\n",a%=b);
	printf("logical AND: %d\n",a&&b);
	printf("logical not OR: %d\n",!(a||b));
	return 0;
}
